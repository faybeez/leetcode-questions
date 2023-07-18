#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (col = 1; col > 0; col--) {
        for (row = 1; row <= col; row++) {
            printf("%i ", row);
        }
        printf("\n");
    }
}