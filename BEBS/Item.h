#pragma once

public ref class Item
{
protected:
   
    Item() {}
    Item(strP productId, strP title, strP price, strP img, Item^ next);
    ~Item();
    
public:
    Item^ next;
    int getNumItem() { return size; }
protected:
   
    strP productId, title, price, img;
    static int size;
 

};

