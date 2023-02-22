#include <iostream>
using namespace std;

int main() {

    // int number;
    // char name[100];
    // // >> : Stream Extraction Oparetor
    // std::cin >> number ;
    // std::cin >> name ;
    // // std::cin >> number >> name ; // can use like this!

    // std::cout << name << " " << number << std::endl;

    // // cout : Console Out
    // // <<  : Stream Insertion Oparetor
    // std::cout << "Hello C++" << 100 << 10; // << ไม่ใช่การต่อ String
    // std::cout << std::endl;
    
    int numbers[5] = {1, 2, 3, 4, 5};
    for(int i = 0;i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    return 0;
}