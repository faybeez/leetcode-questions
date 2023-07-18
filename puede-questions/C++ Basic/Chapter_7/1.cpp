#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    int batas, i;
    srand(time(nullptr));

    printf("Batas: ");
    scanf("%i", &batas);
    int arr[batas];

    for (i = 0; i < batas; i++) {
        arr[i] = rand() % 20 + 1;
        printf("%i ", arr[i]);
    }

    printf("\nreverse: ");
    for(i = batas -1; i >= 0 ; i--) {
        printf("%i ", arr[i]);
    }
}