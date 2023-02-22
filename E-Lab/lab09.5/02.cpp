#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char christ[64],name[32];
    double salary, income, total_s;
    cin >> name >> salary;
    for(int i = 0; i < 12; i++) {
        cin >> income;
        total_s += salary + (income * 0.15);
    }
    sprintf(christ, "%s %.2lf", name, total_s);
    puts(christ);
}