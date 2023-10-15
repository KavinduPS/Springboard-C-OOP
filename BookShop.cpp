#include "BookShop.h"

BookShop::BookShop(int no_of_books_added, BookShop *book_collection)
{
    this->no_of_books_added = no_of_books_added;
    this->book_collection = book_collection;
}

BookShop::~BookShop()
{
    delete this->book_collection;
}

void BookShop::add_book(string title, string author_name)
{
    new(&book_collection[no_of_books_added])BookShop(no_of_books_added, book_collection);
    no_of_books_added++;
}


void BookShop::add_book(string title, string author_name)
{
    new(&book_collection[no_of_books_added])BookShop(no_of_books_added, book_collection);
    no_of_books_added++;
}