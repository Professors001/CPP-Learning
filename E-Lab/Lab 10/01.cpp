#include <iostream>
#include <string>
using namespace std;

class Hero {
    private:
        string name; // declear name string data type
        int level; // declear level int data type
    public:
        Hero(string name, int level) {
            this->name = name; //assign name to this class
            this->level = level; //assign level to this class
        }
        
        string getName() {return this->name;} //getter function from this class
        int getLevel() {return this->level;} //getter function from this class
};


int main()
{   
    //test main
    Hero h1("Zhukov", 5);

    cout << h1.getName() << h1.getLevel() << endl;
}