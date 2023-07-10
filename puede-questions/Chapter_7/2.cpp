#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    int batas, i, max = 0, min = 21;
    float average;
    srand(time(nullptr));

    printf("Batas: ");
    scanf("%i", &batas);
    int arr[batas];

    for (i = 0; i < batas; i++) {
        arr[i] = rand() % 20 + 1;
        printf("%i ", arr[i]);
        average += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    average /= batas;

    printf("\nmaksimal: %i\nminimal: %i\nrata-rata: %.2f", max, min, average);
}