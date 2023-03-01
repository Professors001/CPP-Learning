#include <iostream>
using namespace std;

int main() {
    int prison, count = 0, i = 0, max = 0, current, array[100] = {0};
    cin >> prison;
    for(; i < prison; i ++) {
        cin >> current;
        if(current > max)
            max = current;
        array[current] = 1;
    }
    for(i = 1;i <= max; i += 2) {
        if(!array[i])
            cout << i << " ";
    }
    cout << endl;
    for(i = 2;i <= max; i += 2) {
        if(!array[i])
            cout << i << " ";
    }
}