#pragma once

public ref class Item
{
protected:
   
    Item() {}
    Item(strP productId, strP title, strP price, strP img, Item^ next);
    ~Item();
    
public:
    Item^ next;
    int getNumItem() { return size; }    strP productId, title, price, img;
protected:
    static int size;
};

