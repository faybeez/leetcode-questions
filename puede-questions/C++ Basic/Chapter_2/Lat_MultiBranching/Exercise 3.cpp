// Cek kategori bilangan

#include <stdio.h>

int main() {

    int bilangan;
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &bilangan);

    if (bilangan % 4 == 0) {
        printf("Kategori 4N");
    }
    else if (bilangan % 4 == 1) {
        printf("Kategori 4N+1");
    }
    else if (bilangan % 4 == 2) {
        printf("Kategori 4N+2");
    }
    else {
        printf("Kategori 4N+3");
    }
}