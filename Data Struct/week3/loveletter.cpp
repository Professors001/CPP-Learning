#include <iostream>
using namespace std;

int main() {
    char text[101];
    int i, n;
    cin.getline(text, 101);
    for(n = 0; text[n] != '\0'; n++);
    for(i = 0; i < n; i++) {
        if ((text[i] == 'a' || text[i] == 'e' || text[i] =='i' || text[i] == 'o' || text[i] == 'u') && text[i] == text[ i+ 2]) {
            if (text[i+1] == 'p') {
                i+=2;
            }
        }
        cout << text[i];
    }
}