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
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(string str){
    spellBook.forgetSpell(str);
}

void Warlock::launchSpell(string name, ATarget &target){
    ASpell * spell = spellBook.creatSpell(name);
    if (spell != NULL)
    {
        spell->launch(target);
        delete spell;
    }
}

#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"


/* int main()
{
    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    BrickWall model1;

    Polymorph* polymorph = new Polymorph();
    TargetGenerator tarGen;

    tarGen.learnTargetType(&model1);
    richard.learnSpell(polymorph);

    Fireball* fireball = new Fireball();

    richard.learnSpell(fireball);

    ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

    richard.introduce();
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);

    delete fireball;
    delete polymorph;
    delete wall;
} */