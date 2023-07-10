#include <stdio.h>

int main() {
    int col, row, batas, angka;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    angka = (1 + batas) * batas / 2;

    for (row = 1; row <= batas; row++) {
        for (col = 1; col <= row; col++) {
            printf("%i ", angka);
            angka --;
        }
        printf("\n");
    }
}