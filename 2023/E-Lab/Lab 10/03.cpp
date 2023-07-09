#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
    private:
        point center;
        double radius;
    public:
        Circle(point input, double radius) {
            this->center.xPosition = input.xPosition; //assign x_value to this class from struct
            this->center.yPosition = input.yPosition; //assign y_value to this class from struct
            this->radius = radius; //assign radius_value to this class from struct
        }

        double area() {
            return M_PI * radius * radius; // return area_value (M_PI) = Pi Value 3.14... * radius^2
        }

        double distanceFromCenter(point pt) {
            // distance formula in circle can write not like me just make more variable
            return sqrt(pow((pt.xPosition - this->center.xPosition), 2) + pow((pt.yPosition - this->center.yPosition), 2));
        }

        int contains(point pt) {
            // use distanceFromCenter(pt) to calculate that a pt node is in range of this circle radius
            double distance = distanceFromCenter(pt);
            if (distance <= radius) {
                return 1;
            } else { return 0; }
        }
};

int main()
{
    // test main
    point a1 , a2;
    a1.xPosition = 0;
    a1.yPosition = 0;
    Circle c1(a1, 5);

    a2.xPosition = 4;
    a2.yPosition = 4;

    cout << c1.contains(a2) << endl;

}