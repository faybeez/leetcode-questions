#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    int batas, i, cari;
    bool counter = false;
    srand(time(nullptr));

    printf("Batas: ");
    scanf("%i", &batas);
    int arr[batas];

    for (i = 0; i < batas; i++) {
        arr[i] = rand() % 20 + 1;
        printf("%i ", arr[i]);
        }

    printf("\nAngka yang ingin dicari: ");
    scanf("%i", &cari);

    for (i = 0; i < batas; i++) {
        if (arr[i] == cari) {
            printf("Ketemu di posisi ke - %i\n", i+1);
            counter = true;
            continue;
        }
    }

    if (counter == 0) {
        printf("Tidak Ketemu.");
    }
}