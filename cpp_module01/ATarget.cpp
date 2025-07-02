#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::~ATarget(){}

ATarget::ATarget(string type){
    this->type = type;
}

const string & ATarget::getType() const{
    return(type);
}

void ATarget::getHitBySpell(const ASpell & spell) const{
    cout << type << " has been " << spell.getEffects() << '!'
    << endl;
}

ATarget::ATarget(){}
ATarget::ATarget(const ATarget & other){
    type = other.type;
}

ATarget &ATarget::operator=(const ATarget & other){
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

