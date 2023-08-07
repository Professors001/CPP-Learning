#include <stdio.h>

int a(int n, int base) {
    if(n == 1) {
        return base;
    } return (a(n-1, base) + 3);
}

int fac(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * fac(n-1);
    }
}

int tail_rec(int n, int sum) {
    if (n <= 1) {return sum;}
    else {return tail_rec(n-1, sum + 3);}
}

int ack(int m, int n) {
    if(m == 0) {return n+1;}
    else if(m > 0 && n == 0) {return ack(m-1, 1);}
    else{return ack(m-1, ack(m, n-1));}
}

int main() {
    printf("%d\n", a(5, 2));
}