#include <stdio.h>

int main() {
    int col, row, batas, kiri, kanan;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    kanan = batas;
    kiri = batas;

    for (row = 1; row < batas * 2; row++) {
        for (col = 1; col < batas * 2; col++) {
            if (col == kiri || col == kanan)
                printf("* ");
            else
                printf("  ");
        }
        if (row < batas) {
                kiri--;
                kanan++;
            }
            else {
                kiri++;
                kanan--;
            }
        printf("\n");
    }
}