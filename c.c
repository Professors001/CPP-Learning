#include <stdio.h>

int main() {
    int num_pole, count = 1;
    scanf("%d", &num_pole);
    int poles[num_pole];
    for (int i = 0; i < num_pole; i++) {
        scanf("%d", &poles[i]);
    }

    for (int i = 0; i < num_pole - 1; i++) {
        int max_height = poles[i];
        for (int j = i + 2; j < num_pole; j++) {
            if (poles[j] > max_height) {
                count++;
                max_height = poles[j];
            }
        }
    }

    printf("%d", count);

    return 0;
}
