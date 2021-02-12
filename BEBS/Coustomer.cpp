#include "pch.h"

Coustomer::Coustomer(strP userRole, strP userId, strP email, strP name, strP lastActivity)
	:User(userRole, userId, email, name, lastActivity)
{

}

void Coustomer::addItemToCart(String^ itemId)
{
	
	if(cartShoping.count(itemId)==0)
		cartShoping.insert(Mymap::make_value(itemId, 1));
	else
		cartShoping[itemId]++;
	
	
}