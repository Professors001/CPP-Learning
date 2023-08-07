#include <iostream>
using namespace std;

double calculateAverage(const double* numbers, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    if (size == 0) {
        return 0.0;
    }
    return (sum/size);
}

int main() {
    int num,i;
    cin >> num;
    double exam1[num],exam2[num],exam3[num];
    for(i = 0; i < num; i++) {
        cin >> exam1[i] >> exam2[i] >> exam3[i];
    }
    
    double averExam1 = calculateAverage(exam1, num);
    double averExam2 = calculateAverage(exam2, num);
    double averExam3 = calculateAverage(exam3, num);
    double averAllExam = (averExam1 + averExam2 + averExam3);

    int score1, score2, score3, point;
    for(i = 0; i < num; i++) {
        point = 0;
        score1 = exam1[i]; score2 = exam2[i]; score3 = exam3[i];
        if(!score1|| !score2|| !score3) {continue;}
        if(score1 >= averExam1) {point += 1;}
        if(score2 >= averExam2) {point += 1;}
        if(score3 >= averExam3) {point += 1;}
        if(point >= 2 && (score1+score2+score3) >= averAllExam) {cout << i+1 << " ";}
    }
    
}