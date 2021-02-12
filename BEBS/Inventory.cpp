#include "pch.h"

Inventory::Inventory(){
	MySQL db;
	head = db.getListOfBook();

}

Inventory::~Inventory()
{
	Book^ tmp;
	while (head != nullptr)
	{
		tmp = head;
		head = safe_cast<Book^> (head->next);
		delete tmp;
	}
}

Book^ Inventory::initBookAndSendP( )
{
	this->~Inventory();
	return head;

}

void Inventory::BookLIndex()
{
	int size = head->getNumItem();
	if (size < 8)
		return;
	index=index-8;
	if (index < 0)
		index = size +index;
}
Book^ Inventory::getBook()
{
	Book^ b = head;
	if (head == nullptr)
		return head;
	int size = head->getNumItem();
	if (++index == size)
		index = 0;
	for (int i = 0; i != index; ++i)
		b = safe_cast<Book^>(b->next);
	return b;




}