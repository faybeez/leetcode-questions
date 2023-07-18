#include <stdio.h>


int main() {
    int panjang, lebar, petak, angka1, col, row, boxrow, i;

    printf("Masukkan panjang: ");
    scanf("%i", &panjang);
    printf("Masukkan lebar: ");
    scanf("%i", &lebar);
    printf("Masukkan petak: ");
    scanf("%i", &petak);


    for (boxrow = 1; boxrow <= panjang; boxrow++) {
        for (row = 1; row <= petak; row++) {
            for (col = 1; col <= lebar; col++) {
                if((boxrow % 2 == 1 && col % 2 == 1) || (boxrow % 2 == 0 && col % 2 == 0)) {
                    for (i = 0; i < petak; i++) {
                        printf("*");
                    }
                }
                else{
                    for (i = 0; i < petak; i++) {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
}