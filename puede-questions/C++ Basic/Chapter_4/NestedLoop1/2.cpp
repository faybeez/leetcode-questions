#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (col = 1; col <= batas; col++) {
        for (row = 1; row <= batas; row++) {
            printf("%i ", col);
        }
        printf("\n");
    }
}