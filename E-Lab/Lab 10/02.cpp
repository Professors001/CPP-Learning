#include <iostream>
#include <string>

using namespace std;

class Hero {
    //this class from 01.cpp
    private:
        string name;
        int level;
    public:
        Hero(string name, int level) {
            this->name = name;
            this->level = level;
        }
        
        string getName() {return this->name;}
        int getLevel() {return this->level;}
};

int main()
{
    string name; int level; // declear variable to get value from cin
    cin >> name >> level; // assign name and value to variable that create before
    Hero hero(name, level); // create a object by use value from variable
    cout << hero.getName() << " " << hero.getLevel() << endl; // just print it out!
}