// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.
#ifndef PCH_H // include guard
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
#include "ProfitControl.h"
#include "OrdersControl.h"
#include "SalesControl.h"
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
	white spaces don’t allowed in the entire string.
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
inline bool isGoodName(String ^ pass) {
	// Regular expression definition 

	Regex^ pattern = gcnew Regex("^[a-zA-Z]{3,}+([_ -]?[a-zA-Z0-9])*");
	return pattern->IsMatch(pass);
}
inline bool isInteger(String^ number)
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
	white spaces don’t allowed in the entire string.
/**/

inline bool isGoodPass(String^ pass) {
	// Regular expression definition 
	
	Regex^ pattern = gcnew Regex("^(?=\\S+$)(((?=.*[a-z][A-Z])|(?=.*[0-9]))|((?=.*[0-9])(?=.*[a-z][A-Z])))(?=.{8,15})");

	return pattern->IsMatch(pass);
}


#endif 
