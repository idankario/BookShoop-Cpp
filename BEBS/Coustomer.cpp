#include "pch.h"

Coustomer::Coustomer(strP userRole, strP userId, strP email, strP name, strP lastActivity)
	:User(userRole, userId, email, name, lastActivity)
{

}
strP Coustomer::getValue(strP s)
{
	return cartShoping[s].ToString();
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
			listBox->Items->Add(name + " : " + cartShoping[itemId] + " x " + price + "   " + priceItem);
		else
		{
			listBox->Items->RemoveAt(lineItems[itemId]);
			listBox->Items->Insert(lineItems[itemId], name + " : " + cartShoping[itemId] + " x " + price + "   " + priceItem);
		}
	}
	else
		listBox->Items->Add(name + " : " + cartShoping[itemId] + " x " + price + "   " + priceItem);
}
strP Coustomer::getId()
{
	return this->userId;
}
/**
 * Here I have edited the above function IAW
 * the recommendations.
 * @param s is a const reference to a std::string
 * @return the substring directly
 */
strP get_last_word( strP s) {
	int index;
	int size = s->Length;
	for (int i = 0; i < size; i++)
		if (s[i]==' ')
			index = i++;
	return s->Substring(index);
}
void Coustomer::insertBookList(int idP, System::Windows::Forms::ListBox^ invoice)
{
	MySQL db;
	for (Mymap::iterator iter = cartShoping.begin(); iter != cartShoping.end(); iter++)
	{
		strP itemId = iter.get_ref()->first;
		int amount = iter.get_ref()->second;
		int line = lineItems[itemId];
		strP price = get_last_word(invoice->Items[line]->ToString());
		db.insertBookList(idP,int::Parse(itemId), amount, price);
	}

}


//for (int size = invoice->Items->Count;size>0;size--)
//{MessageBox::Show(invoice->GetItemText(0));
//	lineItems.get_key(i);
//	int p = Convert::ToInt32(lineItems[i]);
//}

//for (auto it = cartShoping.begin();it != cartShoping.end(); ++it)
//{
//	strP itemId = it.first;
//	int amount= it.second;
//}
//int amountItem = Convert::ToInt32(cartShoping[itemId]);