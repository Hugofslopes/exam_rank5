#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
using namespace std;
# include <map>

class ATarget;

class TargetGenerator{
    public: 
        TargetGenerator();
        void learnTargetType(ATarget * target);
        void forgetTargetType(string const &target);
        ATarget* createTarget(string const &target);
        ~TargetGenerator();

    private:
        TargetGenerator(const TargetGenerator &other);
        TargetGenerator& operator=(const TargetGenerator &other);
        map<string, ATarget *> targets;
} ;

#endif