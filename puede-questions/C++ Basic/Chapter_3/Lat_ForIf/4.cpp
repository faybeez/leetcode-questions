// print faktor

#include <stdio.h>


int main() {

    int i, angka, jFaktor = 2;
    printf("Masukkan angka: ");
    scanf("%i", &angka);

    printf("1 ");

    for (i = 2; i < angka; i++) {
        if (angka % i == 0) {
            printf("%i ", i);
            jFaktor ++;
        }
    }
    
    printf("%i ", angka);

    if (jFaktor == 2) {
        printf("\nBukan prima.");
    }
    else {
        printf("\nPrima.");
    }
}