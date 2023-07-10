#include <stdio.h>

int main() {
    int col, row, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    
    for (row = 1; row <= batas; row++) {
        for (col = 1; col <= batas; col++) {
            if (row == 1 || col == row || col == batas)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}