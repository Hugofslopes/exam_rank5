#include "Warlock.hpp"

const string & Warlock::getName() const{
    return (name);
}

const string & Warlock::getTitle() const{
    return (title);
}

Warlock::Warlock(string name, string title){
    this->name = name;
    this->title = title;
    cout << name << ": This looks like another boring day." << endl;
}   

void Warlock::setTitle(const string & str){
    title = str;
}

void Warlock::introduce() const{
    cout << name << ": I am " << name << ", " << title << '!' << endl;
}

Warlock::Warlock(){}

Warlock::~Warlock(){
    cout << name << ": My job here is done!" << endl;
}

Warlock::Warlock(const Warlock &other){
    name = other.name;
    title = other.title;
}

Warlock& Warlock::operator=(const Warlock &other){
    if (this != &other)
    {
        name = other.name;
        title = other.title;
    }
    return (*this);
}


/* int main()
{
    Warlock const richard("Richard", "Mistress of Magma");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");
    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;

return (0);
}


 */