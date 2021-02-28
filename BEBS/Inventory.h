#pragma once


public ref class Inventory
{
	
public:
	Inventory();
	Inventory(Book^ listBook)
	{
		head = listBook;
	}
	int getNumberBooks();
	void BookLIndex();
	Book^ getBook();
	void  addListBook(System::Windows::Forms::ListBox^ listBox);
	Book^ getBookByIndex(int index);
	void initIndex();
	void addBookToInvoice(System::Windows::Forms::ListBox^ listBox);
	Book^ getHead();
	void setBook(Book^ b);
protected:
	~Inventory();
private:
	Book^ head;
	int index;
	
};



