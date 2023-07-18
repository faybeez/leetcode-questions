#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    srand(time(nullptr));
    int i;
    char jwb;

    printf("1. Pikirkan suatu angka antara 10 - 99 (misal 10)\n");
    printf("2. Tambahkan kedua angka tersebut (1 + 0 = 1)\n");
    printf("3. Jadikanlah angka hasil penjulahan jadi bil pengurang (10 - 1 = 9)\n");
    printf("4. Konsentrasikan pikiran anda pada karakter dari angka anda (angka anda = 9)\n");

    jwb = rand() % 15 + 33;

    for (i = 99; i >= 0; i--) {
        printf("%i = ", i);
        if (i % 9 == 0 && i < 90) {
            printf("%c  ", jwb);
        }
        else {
            printf("%c  ", rand() % 15 + 33);
        }
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    printf("Tekan Enter Untuk melihat karakter dari angka yang anda pikirkan!");
    scanf("%c");
    printf("%c", jwb);
}