#include "libraries.h"

class Book
{
    protected:
        string title;
        string author_name;

    public:
    //constructors and destructor
        Book();
        Book(string title, string author_name);
        ~Book();

    //getters and setters
        void set_title(string title);
        string get_title();

        void set_author_name(string author_name);
        string get_author_name();

        virtual void print_description();
};