#include "Book.h"

class AudioBook : public Book
{
    private:
        string voice_actor;

    public:
    //constructors and destructor
        AudioBook();
        AudioBook(string title, string author_name, string voice_actor);
        ~AudioBook();

    //getters and setters
        void set_voie_actor(string voice_actor);
        string get_voice_actor();

        void print_description();
};