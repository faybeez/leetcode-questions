// Cek bilangan bulat / pecahan

#include <stdio.h>

int main() {

    float bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%f", &bilangan);

    if (int(bilangan) == bilangan) {
        printf("Bilangan bulat");
    }
    else {
        printf("Bilangan pecahan");
    }
}