#include <stdio.h>

double findAverage(char *filename)
{
    FILE *file = foprn(filename, r);
    
    
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}