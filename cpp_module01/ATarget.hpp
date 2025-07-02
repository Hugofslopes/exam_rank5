#ifndef ATARGET_HPP
# define ATARGET_HPP


# include <iostream>

using namespace std;

class ASpell;

class ATarget {
    public:
        virtual ~ATarget();
        virtual ATarget * clone()const=0;
        ATarget(string type);
        const string & getType() const;
        void getHitBySpell(const ASpell & spell) const;
    
    protected:
        ATarget();
        ATarget(const ATarget & other);
        ATarget &operator=(const ATarget & other);
        string type;
} ;

#endif