#include "libraries.h"
#include "Book.h"

class BookShop
{
    private:
        int no_of_books_added;
        BookShop *book_collection = static_cast<BookShop*>(malloc(10*sizeof(BookShop)));

    public:
        BookShop();
        BookShop(int no_of_books_added, BookShop *book_collection);
        ~BookShop();

        virtual void add_book(string title, string author_name);
        void add_book(string title, string author_name, string voice_actor);

};