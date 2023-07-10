// Cek kedua bilangan kelipatan 5, jika iya tukar, jika tidak, cetak no swap

#include <stdio.h>

int main() {

    int bilangan1, bilangan2;
    printf("Masukkan bilangan 1: ");
    scanf("%i", &bilangan1);
    printf("Masukkan bilangan 2: ");
    scanf("%i", &bilangan2);

    if (bilangan1 % 5 == 0 && bilangan2 % 5 == 0) {
        bilangan1 ^= bilangan2;
        bilangan2 ^= bilangan1;
        bilangan1 ^= bilangan2;

        printf("Swap\nBilangan 1: %i\nBilangan 2: %i", bilangan1, bilangan2);
    }
    else {
        printf("NO SWAP");
    }
}