#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    
    for (row = 1; row <= batas; row++) {
        for (col = 1; col <= batas - (row - 1); col++) {
            if (row == 1 || col == 1 || col == batas - (row - 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}