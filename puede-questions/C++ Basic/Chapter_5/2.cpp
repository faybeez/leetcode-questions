#include <stdio.h>

int main() {
    int choice, row, col;

    printf("Masukkan angka ganjil: ");
    scanf("%i", &choice);

    while (choice % 2 != 1) {
        printf("\nInput salah!\n");
        printf("Masukkan angka ganjil: ");
        scanf("%i", &choice);
    }
    for (row = 1; row <= choice; row++) {
        for (col = 1; col <= choice; col++) {
            if (row == 1 || row == choice || col == (choice + 1)/2) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}