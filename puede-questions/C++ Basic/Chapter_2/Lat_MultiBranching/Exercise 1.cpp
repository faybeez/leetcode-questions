// Cek bilangan + / 0 / -

#include <stdio.h>

int main() {

    int bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &bilangan);

    if (bilangan > 0) {
        printf("Positif");
    }
    else if (bilangan < 0) {
        printf("Negatif");
    }
    else {
        printf("Nol");
    }
}