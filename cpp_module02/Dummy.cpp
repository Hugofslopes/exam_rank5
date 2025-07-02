#include "Dummy.hpp"

Dummy::Dummy(){
    ATarget::type = "Target Practice Dummy";
}

Dummy::~Dummy(){}

ATarget * Dummy::clone() const{
    return (new Dummy());
}