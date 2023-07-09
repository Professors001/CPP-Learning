#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Pet : public Animal
{
private:
    string name;
public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);
};

Animal :: Animal(int hap, int engy, int full) {
    happiness = hap; energy = engy; fullness = full;
    limitStat();
}
int Animal::getHappiness() { return happiness; }
int Animal::getEnergy() { return energy; }
int Animal::getFullness() { return fullness; }
void Animal :: limitStat() {
    if(happiness > MAX_FULLNESS) { happiness = MAX_FULLNESS; }
    if(happiness < 0) { happiness = 0; }
    if(energy > MAX_FULLNESS) { energy = MAX_FULLNESS; }
    if(energy < 0) { energy = 0; }
    if(fullness > MAX_FULLNESS) { fullness = MAX_FULLNESS; }   
    if(fullness < 0) { fullness = 0; }
}
void Animal :: eat(int amount) {
    if (amount < 0) {return;}
    fullness += amount;
    if(fullness > MAX_FULLNESS) {
        this->happiness -= 10;
    }
    limitStat();
}
void Animal :: play(int time) {
    if(energy == 0 || fullness == 0 || time < 0) {return ;}
    energy -= (10 * time);
    fullness -= (20 * time);
    happiness += (5 * time);
    limitStat();
}
void Animal :: sleep(int time) {
    if (time < 0) {return;}
    energy += (10 * time);
    fullness -= (10 * time);
    limitStat();
}

Pet :: Pet(string tag, int hap, int engy, int full) : Animal(hap, engy, full) {
    name = tag;
}

string Pet :: getName() { return name; }

void Pet :: setName(string newtag) { 
    name = newtag; 
}

int main()
{
}