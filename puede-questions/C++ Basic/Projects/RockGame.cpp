#include <stdio.h>
#include <time.h>
#include <random>

int main() {
    char main;
    int batu, pilihC, pilihO, gilir, C[3] = {3, 2, 1};
    srand(time(nullptr));

    //aturan permainan
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n                     ROCK GAME\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nKomputer akan menyediakan batu secara acak.\nPengambilan jumlah batu antara 1 - 3.\nSiapa yang menghabiskan batu (batu <= 0) akan kalah.\n");
    printf("=====================================================================\n");

    while (true) {
        while (true) {
            printf("\nPilih giliran\n\033[31;1m1. Komputer mulai terlebih dahulu.\033[0m\n2. Anda mulai terlebih dahulu.\n");
            printf("Pilihan anda: ");
            scanf("%i", &gilir);
            if (gilir > 2 || gilir < 1) {
                printf("\nPilihan invalid! Tolong pilih angka 1 atau 2!\n");
            }
            else {
                break;
            }
        }

        //menyiapkan batu - 4N + 1
        batu = 4 * (rand() % 10 + 5) + 1;
        if (gilir == 1) {
            pilihC = rand() % 3 + 1;
            printf("Jumlah batu yang disediakan: %i\n", batu + pilihC);
            printf("\033[31;1m\nJumlah yang diambil komputer: %i\033[0m\n", pilihC);
            printf("Sisa batu sekarang: %i\n", batu);
        }
        else {
            printf("Jumlah batu yang disediakan: %i\n", batu);
        }
        //mulai game
        while (batu != 0) {
            //giliran manusia
            while (true) {
                printf("\nJumlah batu yang Anda ambil: ");
                scanf("%i", &pilihO);
                if (pilihO > 3 || pilihO < 1 || pilihO > batu) {
                    printf("\033[35;1mPilihan invalid! Harus ambil batu dari 1-3.\n\033[0m");
                }
                else {
                    batu -= pilihO;
                    printf("Sisa batu sekarang: %i\n", batu);
                    break;
                }
            }

            if (batu == 0) {
                break;
            }
            
            //giliran komputer
            pilihC = C[pilihO - 1];
            batu -= pilihC;
            printf("\033[31;1m\nJumlah yang diambil komputer: %i\n\033[0m", pilihC);
            printf("Sisa batu sekarang: %i\n", batu);
            
        }

        printf("\033[31;1m\nKomputer Menang!\033[0m\n\nCoba lagi? (y/n) ");
        scanf(" %c", &main);
        if (main == 'n') {
            printf("\nTerima kasih telah bermain!");
            break;
        }

    }
}