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
		if (head == nullptr)
			return 0;
		else
			return head->getNumItem();
	}
	Book^ initBookAndSendP();
	void BookLIndex();
	Book^ getBook();
protected:
	~Inventory();
private:
	Book^ head;
	int index;
	
};



