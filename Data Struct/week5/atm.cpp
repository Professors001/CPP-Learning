#include <iostream>
#include <queue>
using namespace std;

class Person{
    public: 
    int number;
    int money;
    Person(int n) {
        money = 0;
        number = n;
    }
};

int withdrwan(int max, Person a) {
    if(a.money <= max) {return 0;}
    else{return a.money - max;}
}

int main() {
    queue<Person> atm;
    int n, x;

    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        Person temp(i);
        cin >> temp.money;
        atm.push(temp);
    }

    while(!atm.empty()) {
        Person temp = atm.front();
        temp.money = withdrwan(x, temp);
        atm.pop();
        if(temp.money == 0) {
            cout << temp.number << " ";
        } else {atm.push(temp); }
    }
}