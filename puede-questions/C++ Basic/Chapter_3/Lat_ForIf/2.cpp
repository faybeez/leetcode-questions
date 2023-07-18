// print tambah2

#include <stdio.h>

int main() {

    int batas, i, angka = 0;
    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 1; i < batas; i++) {
        printf("%i + ", i);
        angka += i;
    }

    angka += batas;
    printf("%i = %i", batas, angka);
}