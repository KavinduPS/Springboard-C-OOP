#include "Book.h"

Book::Book(string title, string author_name)
{
    this->title = title;
    this->author_name = author_name;
}

Book::~Book()
{

}

//getters and setters
void Book::set_title(string title)
{
    this->title = title;
}

string Book::get_title()
{
    return this->title;
}

void Book::set_author_name(string author_name)
{
    this->author_name = author_name;
}

string Book::get_author_name()
{
    return this->author_name;
}

void Book::print_description()
{
    cout<<"Book title: "<<this->title<<endl;
    cout<<"Book author: "<<this->author_name<<endl;
}