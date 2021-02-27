#include "pch.h"

MySQL::MySQL()
{
	constr = "datasource=localhost; port=3306; username=root; password=bebs";
	conData = gcnew MySqlConnection(constr);
}
MySQL::~MySQL()
{

}
strP  MySQL::getPassqord(strP user)
{
	strP pass;
	if (user == "*************")
		return pass;
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select pass from book_store.users where email='" + user + "';", conData);
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read())
		{
			pass = myRender->GetString("pass");
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return pass;
}
User^ MySQL::getInstaseUser(strP user, strP password)
{
	User^ t = nullptr;
	//select * from book_store.users password and user
	MySqlCommand^  cmdDB = gcnew MySqlCommand("select  * from book_store.users where email = '" + user + "' and pass='" + password + "';", conData);
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		strP userRole, userId, email, name, lastActivity;
		if (myRender->Read())
		{
			userRole = myRender->GetString("user_role");
			userId = myRender->GetString("user_id");
			name= myRender->GetString("user_name");
			lastActivity = myRender->GetString("last_activity");
			if (userRole == "Admin")
				t= gcnew Manager(userRole, userId, email, name, lastActivity);
			else
				t= gcnew Coustomer(userRole, userId, email, name, lastActivity);
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return t;
}
BindingSource^ MySQL::GetBookTable()
{
	BindingSource^ bSource = gcnew BindingSource();
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1;", conData);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ table = gcnew DataTable();
		sda->Fill(table);
		bSource->DataSource = table;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return bSource;
}
BindingSource^ MySQL::GetUserTable()
{
	BindingSource^ bSource = gcnew BindingSource();
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users ;", conData);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ table = gcnew DataTable();
		sda->Fill(table);
		bSource->DataSource = table;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return bSource;
}
Book^ getBookMyRender(MySqlDataReader^ myRender)
{
	strP bookId = myRender->GetString("book_id"),
		title = myRender->GetString("title"),
		pages = myRender->GetString("pages"),
		section = myRender->GetString("section"),
		price = myRender->GetString("price"),
		amount = myRender->GetString("amount"),
		publishDate = myRender->GetString("publish_date"),
		info = myRender->GetString("info"),
		img = "Image\\books\\" + myRender->GetString("img"),
		authorName = myRender->GetString("author");
	return gcnew Book(bookId, title, pages, section, price, amount, publishDate, info, img, authorName, nullptr);
}
Book^ MySQL::getListOfBook()
{
	
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select *  from book_store.books where amount>1 and active_item=true;", conData);
	Book^ head = nullptr, ^ next = nullptr;
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read())
		{
			head = getBookMyRender(myRender);
			next = head;
		}
		while (myRender->Read())
		{
			next->next = getBookMyRender(myRender);
			next = safe_cast<Book^>(next->next);
		}

		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return head;
}
//SELECT trackid, name FROM tracks WHERE name LIKE 'Wild%'
Book^ MySQL::searchBooks(strP s)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1 and CONCAT(`book_id`,`title`,`pages`, `section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) LIKE '%" + s + "%';", conData);
	Book^ head = nullptr, ^ next = nullptr;
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read())
		{
			head = getBookMyRender(myRender);
			next = head;
		}
		while (myRender->Read())
		{
			next->next = getBookMyRender(myRender);
			next = safe_cast<Book^>(next->next);
		}

		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return head;
}
Boolean MySQL::executeCmd(MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	conData->Open();
	try {
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read());
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
	myRender->Close();
	conData->Close();
	return true;
}
Boolean  MySQL::addNewUser(strP email, strP password, strP name)
{
	MySqlCommand^ cmdDB;
	cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`users`(`user_name`,`email`,`pass`)VALUES('" + name + "','" + email + "','" + password + "');", conData);
	Boolean s = executeCmd(cmdDB);
	return s;
}
void MySQL::deleteBook(strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("UPDATE  book_store.books SET  active_item = false WHERE book_id ='" + id + "' ;", conData);
	conData->Open();
	if(executeCmd(cmdDB))
		MessageBox::Show("Book Disactive");
	conData->Close();
}
void MySQL::updateBook(strP title, strP page, strP section, strP price, strP amount,strP info, strP img, strP author, strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.books set title='" + title + "',pages='" + page + "',section='" + section + "',price= '" + 
											price + "' ,amount='" + amount + "',info='" + info + "',author='" + author +
											"',img='" + img + "' where book_id='" + id + "' ;", conData);
	if (executeCmd(cmdDB))
		MessageBox::Show("Book Update");
}

void  MySQL::createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,
	strP img, strP author)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`books`(`title`,`pages` ,`section`,`price`,`amount`,`info`,`img`,`author`) VALUES('" 
											 + title + "','" + page + "','" + section + "', '" + price + "' ,'" + amount + "','" + info+ "','"+ img + "','" + author + "');", conData);
	if (executeCmd(cmdDB))
		MessageBox::Show("Crete new Book Success");
}

int  MySQL::insertPurchase(strP cartId, strP userId, strP pamentM, strP totalBill)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`purchases`(`cart_id`,`user_id`,`payment_method`,`price_paid`)VALUES('"
		+ cartId + "','" + userId + "','" + pamentM + "', '" + totalBill + "');", conData);
	executeCmd(cmdDB);
	int purchaseId;
	MySqlCommand^ cmdDB1 = gcnew MySqlCommand("SELECT max(purchase_id) as id from book_store.purchases ;", conData);
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB1->ExecuteReader();
		if (myRender->Read()) {
			purchaseId = myRender->GetInt32("id");
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return purchaseId;
}
int MySQL::getDiscount(strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select max(percent) as p from book_store.discounts where active_discount=true and now() >= date_from and now() <= date_until and user_id_discount ='" + id + "'|| user_id_discount = 'all';", conData);
	int persent;
	try {
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read()) {
			persent = Convert::ToInt32(myRender->GetString("p"));
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return persent;
}
void MySQL::insertBookList(int idP, int itemId, int amount, strP price)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`book_list`(`purchase_id`,`book_id`,`amount`,`price`)VALUES('"
		+ idP + "','" + itemId + "','" + amount + "', '" + price + "');", conData);
	executeCmd(cmdDB);
}
void MySQL::disactiveDiscount(int id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("UPDATE  book_store.discounts SET  active_discount = false where discount_id='" + id + "' ;", conData);
	if (executeCmd(cmdDB))
		MessageBox::Show("Disactive Discount");

}
void  MySQL::updateDiscount(strP id, strP percent, strP dateStart, strP dateEnd)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("UPDATE  book_store.discounts SET percent='" + percent + "',date_from='" 
											+ dateStart + "',date_until='" + dateEnd + "'where discount_id='" + id + "' ;", conData);
	if (executeCmd(cmdDB))
		MessageBox::Show("Update Discount");
}
void MySQL::setValueChart(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	chart1->Series["Books"]->Points->Clear();
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			chart1->Series["Books"]->Points->AddXY(myRender->GetString("Id"), myRender->GetInt32("Price"));
		}
		conData->Close();
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSorce = gcnew BindingSource();
		bSorce->DataSource = dbdataset;
		dataGridView1->DataSource = bSorce;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

void  MySQL::quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select  bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id where pyment_date >= now()-interval 4 month group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);
}
void  MySQL::monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select  bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id where pyment_date >= now()-interval 1 month group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}
void  MySQL::weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select  bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id where pyment_date >= now()-interval 1 week group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}

void MySQL::fillListDiscountExpired(System::Windows::Forms::ListBox^ listD)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select user_id_discount,percent ,DATE_FORMAT(date_from, '%d-%m-%Y') as df  ,DATE_FORMAT(date_until, '%d-%m-%y') as du  from book_store.discounts where active_discount=false or now()>date_until;", conData);
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			listD->Items->Add("Discount for "+ myRender->GetString("user_id_discount")+" "+myRender->GetString("percent") + "% ,FROM " + myRender->GetString("df") + " TO " + myRender->GetString("du"));
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::fillListDiscount(System::Windows::Forms::ListBox^ listD, mapSI^ line)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select discount_id, user_id_discount,percent ,DATE_FORMAT(date_from, '%d-%m-%Y') as df  ,DATE_FORMAT(date_until, '%d-%m-%y') as du  from book_store.discounts where active_discount=true and now()>=date_from and now()<=date_until;", conData);
	MySqlDataReader^ myRender;
	int n=0;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		
		while (myRender->Read()) {
			int id = myRender->GetUInt32("discount_id");
			line->insert(mapSI::make_value(n.ToString(), id));
			n++;
			listD->Items->Add("Discount for " + myRender->GetString("user_id_discount") + " "+myRender->GetString("percent") + "% ,FROM " + myRender->GetString("df") + " TO " + myRender->GetString("du"));
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

void MySQL::setValueDiscountFiled(int idD,System::Windows::Forms::TextBox^ discount, System::Windows::Forms::DateTimePicker^ start, System::Windows::Forms::DateTimePicker^ end)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select percent,date_from as df, date_until as du  from book_store.discounts where discount_id='" + idD + "';", conData);
	MySqlDataReader^ myRender;
	try 
	{
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		if (myRender->Read()) {
			discount->Text = "                              "+myRender->GetString("percent")+"%";
			start->Text = myRender->GetString("df");
			end->Text = myRender->GetString("du");
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
strP get_percent(strP s) {
	int indexS=0;
	int size = s->Length;
	for (int i = 0; i < size; i++)
		if (s[i] ==' ')
			indexS = i++;

	if (indexS != 0)
		s = s->Substring(indexS);
	size = s->Length;
	indexS = 0;
	for (int i = 0; i < size; i++)
		if (s[i] == '%')
			indexS = i;
	MessageBox::Show(s->Substring(0, indexS));
	if (indexS > 0)
		return s->Substring(0, indexS);
	return   s;
}
void MySQL::saveDiscount(System::Windows::Forms::TextBox^ discount, strP start, strP end)
{
	strP s = get_percent(discount->Text);
	if (isNumber(s))
	{
		MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`discounts`(`percent`,`date_from` ,`date_until`) VALUES('" + s + "','" + start + "','" + end + "');", conData);
		if (executeCmd(cmdDB))
			MessageBox::Show("Create new Discount Success");
	}
	else
		MessageBox::Show("Could Not Get number of discount");


}

void  MySQL::setBooksCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vt = myRender->GetString("title");
			comboBox1->Items->Add(vt);
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void  MySQL::booksCom(System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select title from book_store.books;", conData);
	setBooksCom(cmdDB, comboBox1);
}
void MySQL::setProviderCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox2) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vt = myRender->GetString("provider");
			comboBox2->Items->Add(vt);
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::providerCom(System::Windows::Forms::ComboBox^ comboBox2) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select provider from book_store.orders_from_provider;", conData);
	setProviderCom(cmdDB, comboBox2);
}
void MySQL::booksByAmount2(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select title, amount from book_store.books ORDER BY amount asc;", conData);
	MySqlDataReader^ myRender;
	chart2->Series["B"]->Points->Clear();
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		while (myRender->Read()) {
			String^ vtitle = myRender->GetString("title");
			String^ vprice = myRender->GetInt32("amount").ToString();
			chart2->Series["B"]->Points->AddXY(vtitle, myRender->GetInt32("amount"));
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
Boolean^ MySQL::setEditUser(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Edited");
		while (myRender->Read()) {

		}
		conData->Close();
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
}
Boolean^ MySQL::editUser(System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxSTA) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_name='" + textBoxlName->Text + "',user_status='" + textBoxSTA->Text + "' where email='" + textBoxEmail->Text + "' ;", conData);
	Boolean^ isOk = setEditUser(cmdDB);
	return isOk;
}


void  MySQL::quarterlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), b.title from book_store.book_list bl inner join book_store.books b on bl.book_id = b.book_id inner join book_store.purchases p on p.purchase_id=bl.purchase_id WHERE  pyment_date >= now()-interval 4 month group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);

}

void  MySQL::weeklySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), b.title from book_store.book_list bl inner join book_store.books b on bl.book_id = b.book_id inner join book_store.purchases p on p.purchase_id=bl.purchase_id WHERE  pyment_date >= now()-interval 1 week group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);
}

void  MySQL::monthlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), b.title from book_store.book_list bl inner join book_store.books b on bl.book_id = b.book_id inner join book_store.purchases p on p.purchase_id=bl.purchase_id WHERE  pyment_date >= now()-interval 1 month group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);
}
void MySQL::setValueChart2(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2, MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	chart2->Series["Books"]->Points->Clear();
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		while (myRender->Read()) {
			String^ vtitle = myRender->GetString("title");
			String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();
			chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
Boolean^ MySQL::setBlockUser(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Blocked");
		while (myRender->Read()) {

		}
		conData->Close();
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}

}
Boolean^ MySQL::blockUser(System::Windows::Forms::TextBox^ textBoxEmail) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_status='OFF' where email='" + textBoxEmail->Text + "' ;", conData);
	Boolean^ isOk = setBlockUser(cmdDB);
	return isOk;
}
//users control func
void MySQL::setUsersTabel(System::Windows::Forms::ListBox^ listBoxTable, MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vName;
			vName = myRender->GetString("user_name");
			listBoxTable->Items->Add(vName);
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::UsersList(System::Windows::Forms::ListBox^ listBoxTable) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_role='buyer';", conData);
	setUsersTabel(listBoxTable, cmdDB);
}
void MySQL::setValueGrid(System::Windows::Forms::DataGridView^ providerList, MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
		}
		conData->Close();

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSorce = gcnew BindingSource();
		bSorce->DataSource = dbdataset;
		providerList->DataSource = bSorce;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::providerData(System::Windows::Forms::DataGridView^ OrderList )
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select p.amount as Amount ,b.title as Title, provider as Provider, DATE_FORMAT(order_date, '%d-%m-%Y') as Date from book_store.orders_from_provider p inner join book_store.books b on p.book_id = b.book_id;", conData);
	setValueGrid(OrderList, cmdDB);

}