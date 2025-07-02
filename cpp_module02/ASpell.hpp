#ifndef ASPELL_HPP
# define ASPELL_HPP


# include <iostream>

using namespace std;

class ATarget;

class ASpell {
    public:
        virtual ~ASpell();
        virtual ASpell * clone()const=0;
        ASpell(string name, string effects);
        string getName() const;
        string getEffects() const;
        void launch(const ATarget & target) const;
    
    protected:
        ASpell();
        ASpell(const ASpell & other);
        ASpell &operator=(const ASpell & other);
        string name;
        string effects;
} ;

#endif