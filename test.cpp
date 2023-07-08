#include <iostream>
using namespace std;

int main() {
    int num_pole;
    cin >> num_pole;
    int poles[num_pole];
    int count = 0;
    int check = 1;
    for (int i = 0; i < num_pole; i++) {
        cin >> poles[i];
    }
    
    // height check
    for (int i = 0; i < num_pole; i++) {
        for (int j = i+1; j < num_pole; j++) {
            for (int k = i+1; k < j; k++) {
                if (poles[k] >= poles[i] || poles[k] >= poles[j]) {
                    check = 0;
                    break;
                }
            }
            if (check) {
                count += 1;
            }
            check = 1;
        }
    }
    cout << count << endl;
    
    return 0;
}
