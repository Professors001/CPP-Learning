#include <iostream>
using namespace std;

class Rectangle {
public:

    double width;
    double length;

    double Area() {
        return width * length;
    }

    double Perimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // std::cout << "Hello, World" << std::endl; //ใช้ตอนยังไม่ประกาศ using namespace std;

    // cout << "Hello, World" << endl; //ใช้ตอนประกาศ using namespace std แล้ว;

    // string name; //ประกาศตัวแปร
    // cin >> name; //รับอินพุตทางKeyboard
    // cout << "Hello, " << name << endl; //ปริ้นแบบหลายตัวในรอบเดียว

    // int a, b; 

    // cin >> a >> b; // รับInputมาคั่นโดย(Space, '\n', ' ')

    // int total = a + b;
    // cout << "Total = " << total << endl; // "Total = 205 มาจาก(a = 203 + b = 2)"

    Rectangle r1, r2;

    cout << "Enter width and length" << endl;

    cin >> r1.width >> r1.length 
        >> r2.width >> r2.length;

    cout << "Area R1: " << r1.Area() << " " << "Perimeter R1: " << r1.Perimeter() << endl;
    cout << "Area R2: " << r2.Area() << " " << "Perimeter R2: " << r2.Perimeter() << endl;
    
}