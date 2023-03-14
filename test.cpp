#include <iostream>
using namespace std;

class Vehicle {
    protected:
        int distance, oil;
    public:
        Vehicle(int d,int o) : distance(d), oil(o) {}


        virtual int Drive() {
            return distance;
        }
        int Fill() {
            return oil;
        }
};

class Car : public Vehicle {
    public:
        Car(int d, int o) : Vehicle(d, o) {}

        virtual int Drive() { 
            return distance + 1;
        }
        int Fill() {
            return oil + 1;
        }
};

int main() {
    Car vehicle1(10,10);
    Vehicle* vehicle2 = &vehicle1;
    cout << vehicle2->Drive() << " "
         << vehicle2->Fill() << endl;
}