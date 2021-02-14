#include "pch.h"

Inventory::Inventory(){
	MySQL db;
	head = db.getListOfBook();

}
void deleteBook(Book^ head)
{
	Book^ tmp;
	while (head != nullptr)
	{
		tmp = head;
		head = safe_cast<Book^> (head->next);
		delete tmp;
	}
}
Inventory::~Inventory()
{
	deleteBook(head);
}

void Inventory::setSearchList(Book^ bookList)
{
	head = bookList;

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
	index++;
	if (index == size)
		index = 0;
	for (int i = 0; i != index; ++i)
		b = safe_cast<Book^>(b->next);
	return b;




}