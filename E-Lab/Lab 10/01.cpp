#include <iostream>
#include <string>
using namespace std;

class Hero {
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
   Hero h1("Zhukov", 5);

   cout << h1.getName() << h1.getLevel() << endl;
}