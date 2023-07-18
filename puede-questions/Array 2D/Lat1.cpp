#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    srand(time(nullptr));
    int i, n, x, baris, kolom, rep[2][20], num, totalrep = 0;
    bool check;

    for (i = 0; i < 20; i++) {
        rep[0][i] = 0;
        rep[1][i] = 0;
    }

    baris = rand() % 5 + 3;
    kolom = rand() % 5 + 3;

    printf("Baris: %i\nKolom: %i\n\n",baris, kolom);

    for (i = 0; i < baris; i++) {
        for (n = 0; n < kolom; n++) {
            check = false;
            num = rand() % 20 + 1;
            printf("%i  ", num);
            for (x = 0; x < (i) * kolom + n + 1; x++) {
                if (rep[0][x] == num) {
                    rep[1][x]++;
                    check = true;
                    break;
                }
            }
            if (!check) {
                rep[0][totalrep] = num;
                rep[1][totalrep]++;
                totalrep ++;
            }
        }
        printf("\n");
    }
    printf("Kembar: \n");
    i = 0;
    while (true) {
        if (rep[0][i] != 0 && rep[1][i] > 1){
            printf("%i = %ix\n", rep[0][i], rep[1][i]);
        }
        else if (rep[0][i] == 0) {
            break;
        }
        i++;
    }
}