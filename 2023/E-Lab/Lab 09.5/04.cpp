#include <iostream>
using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        int find = 0;
        for(i = 0;i < last_word; i++) {
            if(data[i].word == input) {
                find = 1; data[i].count += 1;
            }
        }
        if(!find) {
            data[last_word].word = input;
            data[last_word].count = 1; last_word += 1;
        }
    }

    cout << "Output:" << endl;
    for(i=0;i<last_word;i++){
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}