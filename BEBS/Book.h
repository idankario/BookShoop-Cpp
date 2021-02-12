#pragma once
public ref class Book: Item
{
public:
    
    Book():Item() {}
    Book(strP bookId, strP title, strP pages, strP section, strP price, strP amount, strP publishDate, strP info, strP img, strP authorId, Item^ next);
    strP getTitle();
   
    strP getBookId();
    strP getPages();
    strP getSection();
    strP getPrice();
    strP getAmount();
    strP getPublishDate();
    strP getInfo();
    strP getImg();
    strP getAuthorId();
protected:
	~Book(){}
private:
   
    strP pages, section,amount,publishDate,info,authorId;
};