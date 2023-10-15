#include "AudioBook.h"

AudioBook::AudioBook(string title, string author_name, string voice_actor):Book(title, author_name)
{
    this->voice_actor = voice_actor;
}

AudioBook::~AudioBook()
{

}

//getters and setters
void AudioBook::set_voie_actor(string voice_actor)
{
    this->voice_actor = voice_actor;
}
        
string AudioBook::get_voice_actor()
{
    return this->voice_actor;
}

void AudioBook::print_description()
{
    cout<<"Audio Book title: "<<this->title<<endl;
    cout<<"Audio Book author: "<<this->author_name<<endl;
    cout<<"Audio Book voice actor: "<<this->voice_actor<<endl;
}