#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget * target){
    if (target != NULL)
    {
        map<string, ATarget *>::iterator it =
        targets.find(target->getType());
        if (it == targets.end())
            targets[target->getType()] = target;
    }
}

void TargetGenerator::forgetTargetType(string const &target){
    map<string, ATarget *>::iterator it =
        targets.find(target);
    if (it != targets.end())
    {
        targets.erase(target);
    }
}

ATarget* TargetGenerator::createTarget(string const &target){
    map<string, ATarget *>::iterator it =
        targets.find(target);
    if (it != targets.end())
        return (it->second->clone());
    return (NULL);
}

TargetGenerator::~TargetGenerator(){
}

TargetGenerator::TargetGenerator(const TargetGenerator &other){
    targets = other.targets;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator &other){
    if (this != &other)
    {
        targets = other.targets;
    }
    return (*this);
}
