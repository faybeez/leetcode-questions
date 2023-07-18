#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (row = 1; row <= batas; row++) {
        for (col = row; col >= 1; col--) {
            printf("%i ", col);
        }
        printf("\n");
    }
}