#include "pch.h"
Book^ Inventory::getHead()
{
	return head;
}
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
void Inventory::initIndex()
{
	this->index = 0;
}
void Inventory::addListBook(System::Windows::Forms::ListBox^ listBox)
{
	int size = head->getNumItem();
	for(Book^ b = head; b!=nullptr; b = safe_cast<Book^>(b->next))
		listBox->Items->Add(b->getTitle());

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
	int size = head->getNumItem();
	if (size <2)
		return head;
	Book^ b = head;
	if (index == size)
		index = 0;
	for (int i = 0; i != index; ++i)
		b = safe_cast<Book^>(b->next);
	index++;
	return b;

}
int Inventory::getNumberBooks()
{
	if (head == nullptr)
		return 0;
	return head->getNumItem();

}
Book^ Inventory::getBookByIndex(int index)
{
	int size = head->getNumItem();
	Book^ b;
	if (index <size)
	{
		b = head;
		for (int i = 0; i != index; i++)
			b = safe_cast<Book^>(b->next);
	}
	return b;
}
void Inventory::addBookToInvoice(System::Windows::Forms::ListBox^ listBox)
{
	int size = head->getNumItem();
	for (Book^ b = head; b != nullptr; b = safe_cast<Book^>(b->next))
		listBox->Items->Add(b->getTitle());

}
void Inventory::setBook(Book^ b)
{
	this->head = b;
}
