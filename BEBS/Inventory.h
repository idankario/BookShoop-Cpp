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
protected:
	~Inventory();
private:
	static Book^ head;
	Book^ searchList;
	int index;
	
};



