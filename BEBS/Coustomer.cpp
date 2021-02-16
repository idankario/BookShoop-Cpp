#include "pch.h"

Coustomer::Coustomer(strP userRole, strP userId, strP email, strP name, strP lastActivity)
	:User(userRole, userId, email, name, lastActivity)
{

}

void Coustomer::addItemToCart(strP itemId, strP name,strP price,System::Windows::Forms::ListBox^ listBox, System::Windows::Forms::TextBox^ totalPay)
{
	int p = Convert::ToInt32(price);
	totalCart += p;
	totalPay->Text = "Total Price: "+ totalCart;
	if (cartShoping.count(itemId) == 0)
	{
		cartShoping.insert(Mymap::make_value(itemId, 1));
		lineItems.insert(Mymap::make_value(itemId, listBox->Items->Count));
	}
	else
		cartShoping[itemId]++;
	int amountItem = Convert::ToInt32(cartShoping[itemId]);
	int priceItem = Convert::ToInt32(price)* amountItem;
	if (listBox->Items->Count>0)
	{
		if(amountItem==1)
			listBox->Items->Add(name + " : " + cartShoping[itemId] + "x" + price + "   " + priceItem);
		else
		{
			listBox->Items->RemoveAt(lineItems[itemId]);
			listBox->Items->Insert(lineItems[itemId], name + " : " + cartShoping[itemId] + "x" + price + "   " + priceItem);
		}
	}
	else
		listBox->Items->Add(name + " : " + cartShoping[itemId] + "x" + price + "   " + priceItem);
}