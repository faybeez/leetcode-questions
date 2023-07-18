// Cek bilangan ganjil genap - Ex 2

#include <stdio.h>

int main() {

    int bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &bilangan);

    if (bilangan % 2 == 0) {
        printf("Genap");
    }
    else {
        printf("Ganjil");
    }
}