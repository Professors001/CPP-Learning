#include <iostream>
using namespace std;

// class Book {
//     private:
//         string name;
//         string author;
//         int quantity;
//     public:
//         Book(string n, string a) {
//             name = n;
//             author = a;
//             quantity = 10;
//         }
//         void Buy(int n) {
//             quantity -= n;
//         }
//         void Buy(int num, int i) {
//             quantity += num;
//         }
//         int GetQ() const { return quantity; }
// };

// int main() {
//     Book c_book("C++", "Henry");

//     c_book.Buy(5, 2);
// }

// class Car {
//     private:
//         string license;
//         int power;
//     public:
//         Car(string l) {
//             license = l;
//             power = 100;
//         }
//         void Drive(int n) {
//             power -= n;
//         }
//         int GetPower() const {
//             return power;
//         }
// };

// int main() {
//     Car *car1 = new Car("1");
//     Car car2("2");
//     Car *car3 = car1;
//     Car &car4 = car2;
//     car2.Drive(10);
//     car3->Drive(5);
//     car4.Drive(10);
//     car3->Drive(50);

//     cout << car1->GetPower() << endl << car2.GetPower() << endl <<
//     car3->GetPower() << endl << car4.GetPower() << endl;
// }

// // type 1
// class Garage {
//     private:
//         Car car1;
//         Car car2;

//     //..code..
// };

// class Car {

// };

// //type 2
// class Garage {
//     private:
//         class Car {
//             //..code..
//         };
// };

// // type 3

// class Garage {
//     //..code..
// };
// class Car : public Garage {
//     //..code..
// };