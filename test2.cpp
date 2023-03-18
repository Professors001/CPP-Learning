#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int count = 0;
    string ans = "Frustration";
    for (int i = 0; i < 3; i++) {
        int d;
        int n;
        int t;
        cin >> d >> n >> t; cin.ignore();
        if((d*n) >= t*100) {
            count += 1;
        }
    }

    if(count == 3) {
        ans = "Big game";
    } else if (count == 2) {
        ans = "Little game";
    }
    

    cout << ans << endl;
}