#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
    //from 03.cpp
    private:
        point center;
        double radius;
    public:
        Circle(point input, double radius) {
            this->center.xPosition = input.xPosition;
            this->center.yPosition = input.yPosition;
            this->radius = radius;
        }

        double area() {
            return M_PI * radius * radius;
        }

        double distanceFromCenter(point pt) {
            return sqrt(pow((pt.xPosition - this->center.xPosition), 2) + pow((pt.yPosition - this->center.yPosition), 2));
        }

        int contains(point pt) {
            double distance = distanceFromCenter(pt);
            if (distance <= radius) {
                return 1;
            } else { return 0; }
        }
};

int main()
{
    point center , check; // declear variable
    double radius; // declear variable

    cout << "Center of Circle: "; cin >> center.xPosition >> center.yPosition; // print & assign x,y value to struct center
    cout << "Radius of Circle: "; cin >> radius; // print & assign radius value

    Circle circle(center, radius); // create object circle by using struct center and radius variable

    cout << "Point to Check: "; cin >> check.xPosition >> check.yPosition; // print & assign x,y value to struct check

    cout << "Area of Circle is " << circle.area() << endl; // print area value

    cout << "Distance from Center to Point (" << check.xPosition << ", " << check.yPosition 
            << ") is " << circle.distanceFromCenter(check) << endl;
            // print distance value of center to check

   if(circle.contains(check)) // in contains function it gonna return 0 or 1 only then can use like this to
                              // make this if-else statement more look easy(as i think) 
        cout << "This circle contains this point." << endl; // if return 1
    else cout << "This point is not in this circle." << endl; // if return 0
}