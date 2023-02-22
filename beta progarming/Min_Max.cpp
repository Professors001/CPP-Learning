#include <iostream>
using namespace std;

int main() {
    int n, min, max, i, input;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> input;
        if(i==0) {
            max = input; min = input;
        }
        if (input > max) {
            max = input;
        }
        if (input < min) {
            min = input;
        }
    }
    cout << min << endl << max << endl;
}