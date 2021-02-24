#include "pch.h"

MySQL::MySQL()
{
	constr = "datasource=localhost; port=3306; username=root; password=bebs";
	conData = gcnew MySqlConnection(constr);
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
Boolean  MySQL::addNewUser(strP email, strP password, strP name)
{
	MySqlCommand^ cmdDB;
	cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`users`(`user_name`,`email`,`pass`)VALUES('" + name + "','" + email + "','" + password + "');", conData);
	try {
		conData->Open();
		MySqlDataReader^ my_reader = cmdDB->ExecuteReader();
		my_reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
	conData->Close();
	return true;
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

MySQL::~MySQL()
{

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
	return gcnew Book(bookId, title, pages, section, price, amount, publishDate, info,img, authorName,nullptr);
}
Book^ MySQL::getListOfBook()
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1;", conData);
	Book^ head = nullptr,^next = nullptr;
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
Book^ MySQL::searchBooks(strP s)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1 and CONCAT(`book_id`,`title`,`pages`, `section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) LIKE '%"+s+"%';", conData);
	Book^ head = nullptr, ^next = nullptr;
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
void MySQL::deleteBook(strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.books where book_id='" + id + "' ;", conData);
	MySqlDataReader^ myRender;
	Book^ head = nullptr, ^next = nullptr;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::updateBook(strP title, strP page, strP section, strP price, strP amount,strP info, strP img, strP author, strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.books set title='" + title + "',pages='" + page + "',section='" + section + "',price= '" + 
											price + "' ,amount='" + amount + "',info='" + info + "',author='" + author +
											"',img='" + img + "' where book_id='" + id + "' ;", conData);
	MySqlDataReader^ myRender; 
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

void  MySQL::createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,
	strP img, strP author)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`books`(`title`,`pages` ,`section`,`price`,`amount`,`info`,`img`,`author`) VALUES('" 
											 + title + "','" + page + "','" + section + "', '" + price + "' ,'" + amount + "','" + info+ "','"
											 + img + "','" + author + "');", conData);
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
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
strP  MySQL::getPassqord(strP user)
{
	strP pass;
	if (user== "*************")
		return pass;

	MySqlCommand^ cmdDB = gcnew MySqlCommand("select pass from book_store.users where email='"+ user +"';", conData);
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
void  MySQL::quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);
	
}
void  MySQL::monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (MONTH(order_date)=11 and Year(order_date)=2020) group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}
void  MySQL::weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}
int  MySQL::insertPurchase(strP cartId, strP userId,strP pamentM, strP totalBill)
{		
	
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`purchases`(`cart_id`,`user_id`,`payment_method`,`price_paid`)VALUES('"
		+ cartId + "','" + userId + "','" + pamentM + "', '" + totalBill + "');", conData);
	try {

		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {

		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	int purchaseId;
	MySqlCommand^ cmdDB1 = gcnew MySqlCommand("SELECT max(purchase_id) as id from book_store.purchases ;", conData);
	try {
		MySqlDataReader^ myRender = cmdDB1->ExecuteReader();
		if (myRender->Read()) {
			purchaseId = myRender->GetInt32("id");
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return purchaseId;
}
void MySQL::insertBookList(int idP, int itemId, int amount, strP price)
{

	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`book_list`(`purchase_id`,`book_id`,`amount`,`price`)VALUES('"
		+ idP + "','" + itemId + "','" + amount + "', '" + price + "');", conData);


}