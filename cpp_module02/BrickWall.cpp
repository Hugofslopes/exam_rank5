#include "BrickWall.hpp"

BrickWall::BrickWall(){
    ATarget::type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall(){}

ATarget * BrickWall::clone() const{
    return (new BrickWall());
}