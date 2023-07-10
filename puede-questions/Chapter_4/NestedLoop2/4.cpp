#include <stdio.h>

int main() {
    int col, row, batas, angka = 1;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (row = 1; row <= batas; row++) {
        for (col = 1; col <= row; col++) {
            printf("%i ", angka);
            angka ++;
        }
        printf("\n");
    }
}