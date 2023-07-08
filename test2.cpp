#include <iostream>
using namespace std;

int max(int *lists, int n, int start) {
    int max = 0;
    for (int i = start; i < n; i++) {
        if(max < lists[i]) {
            max = lists[i];
        }
    }
    return max;
}


int main () {
    int num_pole, count = 0;
    cin >> num_pole;
    int poles[num_pole];
    for (int i = 0; i < num_pole; i++) {
        cin >> poles[i];
    }
    for (int i = 0; i < num_pole; i++) {
        int max_height = poles[i];
        for (int j = i + 1; j < num_pole; j++) {
            int max_cur = max(poles, j, i+1);
            // cout << max_cur << "-" << poles[j] << endl;
            if(poles[j] <= max_cur && j > i+1) {
                // cout << "PASS" << endl;
                break;
            }
            count++;
            // cout << poles[i] << " " << poles[j] << endl;
            if(poles[j] >= max_height) {
                break;
            }
        }
        // cout << "------" << endl;
    }
    cout << count;
}