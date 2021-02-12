#include "pch.h"

MySQL::MySQL()
{
	constr = "datasource=localhost; port=3306; username=root; password=bebs";
	conData = gcnew MySqlConnection(constr);
}

User^ MySQL::getInstaseUser(strP user, strP password)
{
	MySqlCommand^ cmdDB;
	User^ t = nullptr;
	//select * from book_store.users password and user
	cmdDB = gcnew MySqlCommand("select  * from book_store.users where email = '" + user + "' and pass='" + password + "';", conData);
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
	strP bookId, title, pages, section,
		price, amount, publishDate, info,
		img, authorName;

	bookId = myRender->GetString("book_id");
	title = myRender->GetString("title");
	pages = myRender->GetString("pages");
	section = myRender->GetString("section");

	price = myRender->GetString("price");
	amount = myRender->GetString("amount");
	publishDate = myRender->GetString("publish_date");
	info = myRender->GetString("info");
	img = "Image\\books\\"+ myRender->GetString("img");
	authorName = myRender->GetString("author");
	return gcnew Book(bookId, title, pages, section, price, amount, publishDate, info,img, authorName,nullptr);
}
Book^ MySQL::getListOfBook()
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1;", conData);
	Book^ head = nullptr;
	Book^ next = nullptr;
	
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
Book^ MySQL::getSearchListBook(strP s)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("SELECT * FROM book_store.books WHERE amount > 1 and CONCAT(`book_id`,`title`,`pages`, `section`,"+
											"`price`,`amount`,`publish_date`+,`info`,`img`,`author`) LIKE '%"+s+"%';", conData);
	Book^ head = nullptr;
	Book^ next = nullptr;

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
	Book^ head = nullptr;
	Book^ next = nullptr;



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
void MySQL::updateBook(strP title, strP page, strP section, strP price, strP amount,strP info, 
						strP img, strP author, strP id)
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

