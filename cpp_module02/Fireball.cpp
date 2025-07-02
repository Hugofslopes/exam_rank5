#include "Fireball.hpp"

Fireball::Fireball(){
    ASpell::name = "Fireball";
    ASpell::effects = "burnt to a crisp";
}

Fireball::~Fireball(){}

ASpell * Fireball::clone() const{
    return (new Fireball());
}