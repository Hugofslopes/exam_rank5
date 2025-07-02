#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
using namespace std;
# include <map>
class ASpell;
class ATarget;
#include "SpellBook.hpp"

class Warlock{
    public:
        const string & getName() const; 
        const string & getTitle() const;
        Warlock(string name, string title);   
        void setTitle(const string & str);
        void introduce() const;
        void learnSpell(ASpell * spell);
        void forgetSpell(string str);
        void launchSpell(string name, ATarget &target);
        ~Warlock();

    private:
        Warlock();
        Warlock(const Warlock &other);
        Warlock& operator=(const Warlock &other);
        string name;
        string title;
        SpellBook spellBook;
} ;

#endif