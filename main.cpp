#include "Book.h"
#include "BookShop.h"
#include "AudioBook.h"

int main()
{
    string title, author, voice_actor;
    int n = 0;
    int book_type;
    int i = 0;

    while (n < 10)
    {
        cout<<"Enter 1 to add a Book, Enter 2 to add an Audio Book: "<<endl;
        cin>>book_type;
        if(book_type == 1)
        {
            cout<<"Enter title: "<<endl;
            getline(cin, title);
            cout<<"Enter author: "<<endl;
            getline(cin, author);
            Book *b1 = new Book(title, author);
            i++;
            BookShop col = BookShop(b1);

        }
        else if(book_type == 2)
        {
            cout<<"Enter title: "<<endl;
            getline(cin, title);
            cout<<"Enter author: "<<endl;
            getline(cin, author);
            cout<<"Enter voie actor: "<<endl;
            getline(cin, voice_actor);
            AudioBook *b2 = new AudioBook(title, author, voice_actor);
            i++;
            BookShop col = BookShop(b2);

        }
    }

    return 0;
}