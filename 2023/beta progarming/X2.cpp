#include <iostream>

using namespace std;

class Mean {
    private:
        double num1, num2, mean;
    public:
        Mean() {};
        Mean(double num1, double num2) {
            this->num1 = num1; this->num2 = num2;
        }

        double findMean() {
            mean = (num2 * 2) - num1;
            return mean;
        }
};

int main() { 
    double a,b;
    cin >> a >> b;
    Mean output(a,b);
    int out = (int)output.findMean();
    cout << out << endl;
    return 0;
}