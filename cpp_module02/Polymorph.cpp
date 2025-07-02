#include "Polymorph.hpp"

Polymorph::Polymorph(){
    ASpell::name = "Polymorph";
    ASpell::effects = "turned into a critter";
}

Polymorph::~Polymorph(){}

ASpell * Polymorph::clone() const{
    return (new Polymorph());
}