#include <iostream>
#include <vector>
using namespace std;

int AnnOrchard(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int maxSum = 0;
    vector<int> temp(cols);
    for (int left = 0; left < cols; ++left) {
        temp.assign(cols, 0);

        for(int right = left; right < cols; right++) {
            for(int i = 0; i < rows; ++i) {
                temp[i] += matrix[i][right];
            }

            int curSum = 0;
            int curMax = 0;

            for(int i = 0; i < rows; i++) {
                curMax = max(temp[i], curMax + temp[i]);
                curSum = max(curSum, curMax);
            }
            maxSum = max(maxSum, curSum);
        }
    } return maxSum;
}

int main() {
    int size;
    cin >> size;
    vector<vector<int>> matrix(size, vector<int>(size));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = AnnOrchard(matrix);
    cout << maxSum << endl;

    return 0;
}