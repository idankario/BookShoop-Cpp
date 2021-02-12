#include "pch.h"

Item::Item(strP productId, strP title, strP price, strP img,Item^ next)
	:productId(productId), title(title), price(price), img(img),  next(next)
{
	
	++size;
}
Item::~Item()
{}