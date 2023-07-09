#include <iostream>
using namespace std;

int main() {
    string grade;
    int score, mid_t, fin_t;
    cin >> score >> mid_t >> fin_t;
    score = score + mid_t + fin_t;
    if (score >= 80) {
        grade = "A";
    }
    else if (score >= 75) {
        grade = "B+";
    }
    else if (score >= 70) {
        grade = "B";
    }
    else if (score >= 65) {
        grade = "C+";
    }
    else if (score >= 60) {
        grade = "C";
    }
    else if (score >= 55) {
        grade = "D+";
    }
    else if (score >= 50) {
        grade = "D";
    }
    else {
        grade = "F";
    }
    cout << grade << endl;
}