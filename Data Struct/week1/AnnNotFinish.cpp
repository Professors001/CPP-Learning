#include <iostream>
#include <vector>
using namespace std;

int AnnOrchard(int **mattrix, int size, int option) {
    int max = 0, sum = 0;
    for(int m = 0; m <= size; m++) {
        sum = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                sum += mattrix[i][j];
            }
        }
        if(sum > max) {
        max = sum;
        }
    }
    return max;
}

int main() {
    int size;
    cin >> size;

    int **matrix = new int *[size];

    for(int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        for(int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "------------" << endl;

    cout << AnnOrchard(matrix, size, 1) << endl;

    return 0;
}