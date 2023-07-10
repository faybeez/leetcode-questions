#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (row = 1; row <= batas; row++) {
        for (col = batas - (row - 1); col <= batas; col++) {
            printf("%i ", col);
        }
        printf("\n");
    }
}