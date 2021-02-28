// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.
#ifndef PCH_H 
#define PCH_H
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text::RegularExpressions;
typedef String^ strP;
#include <cliext/map>
typedef cliext::map<String^, int> mapSI;
#include "ProfitControl.h"
#include "OrdersControl.h"
#include "Item.h"
#include "Book.h"
#include "User.h"
#include "Manager.h"
#include "Coustomer.h"
#include "Inventory.h"
#include "DiscountControl.h"
#include "RegisterMenu.h"
#include "ShoppingMenu.h"
#include "LogInMenu.h"
#include "UsersControl.h"
#include "AdminMenu.h"
#include "HomePage.h"
#include "MySQL.h"
#include <regex> 

/*/Password should not contain any space.
	Password should contain at least one digit(0 - 9)
	Password length should be between 8 to 15 characters.
	Password should contain at least one lowercase letter(a - z)
	or one uppercase letter(A - Z).
	white spaces don�t allowed in the entire string.
/**/
inline  bool isValidEmail(String^ email)
{

	// Regular expression definition 
	Regex^ pattern = gcnew Regex("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	// Match the string pattern 
	// with regular expression 
	return pattern->IsMatch(email);
}
/*/Name should not contain any space.
	Name should start with 3 char 
	Name could contain _- or digit
/**/
inline bool isGoodName(String ^ name) {
	// Regular expression definition 

	Regex^ pattern = gcnew Regex("^[a-zA-Z]{3,}([_ -]?[a-zA-Z0-9])*");
	return pattern->IsMatch(name);
}
inline bool isNumber(String^ number)
{

	// Regular expression definition 
	Regex^ pattern = gcnew Regex("[1-9]*");
	return pattern->IsMatch(number);
}

/*/Password should not contain any space.
	Password should contain at least one digit(0 - 9)
	Password length should be between 8 to 15 characters.
	Password should contain at least one lowercase letter(a - z)
	or one uppercase letter(A - Z).
	white spaces don�t allowed in the entire string.
/**/

inline bool isGoodPass(String^ pass) {
	// Regular expression definition 
	
	Regex^ pattern = gcnew Regex("^(?=\\S+$)(((?=.*[a-z][A-Z])|(?=.*[0-9]))|((?=.*[0-9])(?=.*[a-z][A-Z])))(?=.{8,15})");

	return pattern->IsMatch(pass);
}

inline bool isValidInfoUser(String^ email, String^ pass, String^ name) {
	if (!(isValidEmail(email)))
	{
		MessageBox::Show("Email :" + email + " is :invalid");
		return false;
	}
	if (!(isGoodPass(pass)))
	{
		MessageBox::Show(pass + " is not strong enagth:\n Password should not contain any space.\n" +
			"Password should contain at least one digit(0 - 9)\n" +
			"Password length should be between 8 to 15 characters.\n" +
			"Password should contain at least one lowercase letter(a - z) or one uppercase letter(A - Z).\n" +
			"white spaces don�t allowed in the entire string.\n");
		return false;
	}
	if (!(isGoodName(name)))
	{
		MessageBox::Show("Name :" + name + " is :invalid");
		return false;

	}
	return true;
}
inline bool sendMail(strP userEmail, strP msg)
{
	try {
		using namespace System::Web;
		using namespace System::Net::Mail;
		MailMessage^ mail = gcnew MailMessage("bebsshopbook@gmail.com", userEmail, "BebsApp-password", msg);
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->EnableSsl = true;
		client->UseDefaultCredentials = false;
		client->Credentials = gcnew System::Net::NetworkCredential("bebsshopbook@gmail.com", "bebsShopBook1234");
		client->Port = 587;
		client->DeliveryMethod = SmtpDeliveryMethod::Network;
		client->Send(mail);
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Could not send mail"+ex);
		return false;
	}
	return false;
}
#endif 
