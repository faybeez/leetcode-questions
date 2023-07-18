// print faktor

#include <stdio.h>


int main() {

    int i, angka, pangkat, total = 1;
    printf("Masukkan angka basis: ");
    scanf("%i", &angka);
    printf("Masukkan pangkat: ");
    scanf("%i", &pangkat);

    for (i = 1; i <= pangkat; i++) {
        total *= angka;
    }
    
    printf("%i ^ %i = %i", angka, pangkat, total);
}