#pragma once


public ref class Inventory
{
	
public:
	Inventory();
	Inventory(Book^ listBook)
	{
		head = listBook;
	}
	
	int getNumberItems()
	{
		if(searchList == nullptr)
			if (head == nullptr)
				return 0;
			else
				return head->getNumItem();
	}
	void setSearchList(Book^ bookList);
	void BookLIndex();
	Book^ getBook();
	void  addListBook(System::Windows::Forms::ListBox^ listBox);
	Book^ getBookByIndex(int index);
	void addBookToInvoice(System::Windows::Forms::ListBox^ listBox);
protected:
	~Inventory();
private:
	static Book^ head;
	Book^ searchList;
	int index;
	
};



