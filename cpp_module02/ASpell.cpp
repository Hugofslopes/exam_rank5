#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::~ASpell(){}

ASpell::ASpell(string name, string effects){
    this->name = name;
    this->effects = effects; 
}

string ASpell::getName() const{
    return (name);
}

string ASpell::getEffects() const{
    return (effects);
}

ASpell::ASpell(){}

ASpell::ASpell(const ASpell & other){
    name = other.name;
    effects = other.effects;
}

ASpell& ASpell::operator=(const ASpell & other){
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return (*this);
}

void ASpell::launch(const ATarget & target) const{
    target.getHitBySpell(*this);
}

