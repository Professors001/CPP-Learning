#include <iostream>
using namespace std;

int main() {
    int count = 0, n;
    cin >> n;
    while(n > 0) {
        if(n % 2 != 0) {
            n -= 1;
        }
        else{
            n /= 2;
        }
        count += 1;
    }
    cout << count << endl;
}