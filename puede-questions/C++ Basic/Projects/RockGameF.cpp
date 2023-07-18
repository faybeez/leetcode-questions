#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    srand(time(nullptr));
    int batu, pilihC, pilihO = 0, gilir;
    char main = 'y';

    while (main == 'y') {

        printf("Pilih giliran\n");
        printf("Pilihan anda: ");
        scanf("%i", &gilir);
        if (gilir == 2) {
            while (batu % 2 != 1) {
                batu = rand() % 20 + 20;
            }
        }
        else {
            batu = rand() % 20 + 20;
        }
        printf("Jumlah batu yang disediakan: %i\n", batu);

        if (gilir == 2) {
            printf("Jumlah batu yang Anda ambil: ");
            scanf("%i", &pilihO);

            while (pilihO < 1 || pilihO > 3) {
                printf("Pilihan invalid! Harus ambil batu dari 1-3.\n");
                printf("Jumnlah batu yang Anda ambil: ");
                scanf("%i", &pilihO);
            }
        }

        batu -= pilihO;
        printf("Sisa batu sekarang: %i\n", batu);

        while (batu > 0) {
            while (batu > 6) {
                pilihC = rand() % 3 + 1;
                while ((batu - pilihC) % 2 != 1) {
                    pilihC = rand() % 3 + 1;
                }
                if (batu <= 8) {
                    pilihC = batu - 5;
                }

                printf("\nJumlah yang diambil komputer: %i\n", pilihC);

                batu -= pilihC;
                printf("Sisa batu sekarang: %i\n", batu);

                printf("\nJumnlah batu yang Anda ambil: ");
                scanf("%i", &pilihO);

                while (pilihO < 1 || pilihO > 3) {
                    printf("Pilihan invalid! Harus ambil batu dari 1-3.\n");
                    printf("Jumlah batu yang Anda ambil: ");
                    scanf("%i", &pilihO);
                }

                batu -= pilihO;
                printf("Sisa batu sekarang: %i\n", batu);
            }
            if (batu == 6) {
                pilihC = 1;

                printf("\nJumlah yang diambil komputer: %i\n", pilihC);

                batu -= pilihC;
                printf("Sisa batu sekarang: %i\n", batu);

                printf("\nJumnlah batu yang Anda ambil: ");
                scanf("%i", &pilihO);

                while ((pilihO < 1 || pilihO > 3) && pilihO > batu) {
                    printf("Pilihan invalid! Harus ambil batu dari 1-3.\n");
                    printf("Jumlah batu yang Anda ambil: ");
                    scanf("%i", &pilihO);
                }

                batu -= pilihO;
                printf("Sisa batu sekarang: %i\n", batu);
            }
            
            if (batu <= 4 && batu > 0) {
                pilihC = batu - 1;

                printf("\nJumlah yang diambil komputer: %i\n", pilihC);

                batu -= pilihC;
                printf("Sisa batu sekarang: %i\n", batu);

                printf("\nJumnlah batu yang Anda ambil: ");
                scanf("%i", &pilihO);

                while ((pilihO > 1 || pilihO < 3) && pilihO > batu) {
                    printf("Pilihan invalid! Harus ambil batu dari 1-3.\n");
                    printf("Jumlah batu yang Anda ambil: ");
                    scanf("%i", &pilihO);
                }

                batu -= pilihO;
                printf("Sisa batu sekarang: %i\n", batu);
            }    
        }
        printf("\nKomputer Menang!\ncoba lagi? (y/n) ");
        scanf(" %c", &main);
    }
}

