#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

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

void Warlock::learnSpell(ASpell * spell){
    if (spell != NULL)
    {
        map<string, ASpell *>::iterator it =
        spellBook.find(spell->getName());
        if (it == spellBook.end())
        {
            spellBook[spell->getName()] = spell->clone();
        }
    }
}

void Warlock::forgetSpell(string str){
     map<string, ASpell *>::iterator it =
        spellBook.find(str);
        if (it != spellBook.end())
        {
            delete it->second;
            spellBook.erase(str); 
        }
}

void Warlock::launchSpell(string name, ATarget &target){
    map<string, ASpell *>::iterator it =
        spellBook.find(name);
    if (it != spellBook.end())
    {
        it->second->launch(target);
    }
}
/* 
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main()
{
    Warlock richard("Richard", "the Titled");

    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();

    richard.learnSpell(fwoosh);

    richard.introduce();
    richard.launchSpell("Fwoosh", bob);

    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);
    delete fwoosh;
} */