#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
using namespace std;
# include <map>
class ASpell;
class ATarget;

class SpellBook{
    public: 
        SpellBook();
        void learnSpell(ASpell * spell);
        void forgetSpell(string const &spell);
        ASpell* creatSpell(string const &spell);
        ~SpellBook();

    private:
        SpellBook(const SpellBook &other);
        SpellBook& operator=(const SpellBook &other);
        map<string, ASpell *> spellBook;
} ;

#endif