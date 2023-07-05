#include <iostream>
using namespace std;

int main () {
    int min = 10000, max = -10000, times, n;
    scanf("%d", &times);
    for(int i = 0; i < times; i++) {
        scanf("\n%d", &n);
        if(n > max) {
            max = n;
        }
        if(n < min) {
            min = n;
        }
    }
    printf("%d\n%d", min, max);
}