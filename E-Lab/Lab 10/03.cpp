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
    point a1 , a2;
    a1.xPosition = 0;
    a1.yPosition = 0;
    Circle c1(a1, 5);

    a2.xPosition = 4;
    a2.yPosition = 4;

    cout << c1.contains(a2) << endl;

}