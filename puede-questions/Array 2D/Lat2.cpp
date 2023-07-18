#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    srand(time(nullptr));
    int i, n, baris, kolom, num;
    bool check;

    baris = rand() % 5 + 3;
    kolom = rand() % 5 + 3;
    int arr[baris][kolom];

    printf("Baris: %i\nKolom: %i\n\n",baris, kolom);

    printf("Awal: \n");
    for (i = 0; i < baris; i++) {
        for (n = 0; n < kolom; n++) {
            arr[i][n] = rand() % 10;
            printf("%i  ", arr[i][n]);
        }
        printf("\n");
    }

    printf("Reverse horizontal: \n");
    for (i = 0; i < baris; i++) {
        for (n = kolom - 1; n >= 0; n--) {
            printf("%i  ", arr[i][n]);
        }
        printf("\n");
    }

    printf("Reverse vertikal: \n");
    for (i = baris - 1; i >= 0; i--) {
        for (n = 0; n < kolom; n++) {
            printf("%i  ", arr[i][n]);
        }
        printf("\n");
    }
}