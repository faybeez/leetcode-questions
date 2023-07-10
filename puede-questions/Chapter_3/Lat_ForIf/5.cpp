//faktorial

#include <stdio.h>


int main() {

    int i, angka, faktorial = 1;
    printf("Masukkan angka: ");
    scanf("%i", &angka);


    for (int i = 2; i <= angka; i++) {
        faktorial *= i;
    }

    printf("%i! = %i", angka, faktorial);

}