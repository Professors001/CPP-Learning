#include <iostream>
using namespace std;

int main () {
    int min = 10000, max = -10000, times, n;
    cin >> times;
    for(int i = 0; i < times; i++) {
        cin >> n;
        if(n > max) {
            max = n;
        }
        if(n < min) {
            min = n;
        }
    }
    cout << min<< endl << max << endl;
}