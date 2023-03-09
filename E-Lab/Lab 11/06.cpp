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

class Bird : public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet 
{
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird : public Bird, public Pet
{
public:
    OwnedBird(string, int, int, int);
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
Bird::Bird(int hap, int engy, int full) : Animal(hap, engy, full) {}

void Bird::fly(int time) {
    if (time < 0) {return;}
    energy -= (5 * time);
    limitStat();
}
void Bird::sing() {
    //cookie cookie cookie cookie cook cook cra rook cook cook ~~repeat
    happiness += 5;
    limitStat();
}

Pet :: Pet(string tag) { name = tag; }
string Pet :: getName() { return name; }
void Pet :: setName(string newtag) { name = newtag;  }

OwnedBird::OwnedBird(string name, int hap, int engy, int full) : Pet(name), Bird(hap, engy, full) {}

int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}