// Cek bilangan kelipatan 3

#include <stdio.h>

int main() {

    int bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &bilangan);

    if (bilangan % 3 == 0) {
        printf("Kelipatan 3");
    }
    else {
        printf("Bukan kelipatan 3");
    }
}