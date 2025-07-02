#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook(){}

void SpellBook::learnSpell(ASpell * spell){
    if (spell != NULL)
    {
        map<string, ASpell *>::iterator it =
        spellBook.find(spell->getName());
        if (it == spellBook.end())
            spellBook[spell->getName()] = spell;
    }
}

void SpellBook::forgetSpell(string const &spell){
    map<string, ASpell *>::iterator it =
        spellBook.find(spell);
    if (it != spellBook.end())
    {
        spellBook.erase(spell);
    }
}

ASpell* SpellBook::creatSpell(string const &spell){
    map<string, ASpell *>::iterator it =
        spellBook.find(spell);
    if (it != spellBook.end())
        return (it->second->clone());
    return (NULL);
}

SpellBook::~SpellBook(){
}


SpellBook::SpellBook(const SpellBook &other){
    spellBook = other.spellBook;
}

SpellBook& SpellBook::operator=(const SpellBook &other){
    if (this != &other)
    {
        spellBook = other.spellBook;
    }
    return (*this);
}
