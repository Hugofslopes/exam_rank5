#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

using namespace std;

class Warlock{
    public:
        const string & getName() const; 
        const string & getTitle() const;
        Warlock(string name, string title);   
        void setTitle(const string & str);
        void introduce() const;
        ~Warlock();

    private:
        Warlock();
        
        Warlock(const Warlock &other);
        Warlock& operator=(const Warlock &other);
        string name;
        string title;
} ;

#endif