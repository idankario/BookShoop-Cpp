#include "pch.h"

Book::Book(strP bookId, strP title, strP pages, strP section, strP price, strP amount, strP publishDate, strP info, strP img, strP authorId,Item^ next)
	:Item(bookId,  title,  price,  img, next), pages(pages), section(section),
	amount(amount), publishDate(publishDate), info(info), authorId(authorId)
{

}

strP Book::getTitle() {return this->title;}

strP Book::getBookId() { return this->productId; }
strP Book::getPages() { return this->pages; }
strP Book::getSection() { return this->section; }
strP Book::getPrice() { return "Price : "+this->price; }
strP Book::getAmount() { return this->amount; }
strP Book::getPublishDate() { return this->publishDate; }
strP Book::getInfo() { return this->info; }
strP Book::getImg() { return this->img; }
strP Book::getAuthorId() { return this->authorId; }
