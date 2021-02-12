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

#endif //PCH_H
