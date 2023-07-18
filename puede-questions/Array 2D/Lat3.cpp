#include <stdio.h>
#include <random>
#include <time.h>

int main() {
    srand(time(nullptr));
    int i, n, x, baris, kolom, num, rep[20], count = 1;
    bool check;

    for (i = 0; i < 20; i++) {
        rep[i] = -1;
    }

    baris = rand() % 5 + 3;
    kolom = rand() % 5 + 3;
    int arr[baris][kolom];

    printf("Baris: %i\nKolom: %i\n\n",baris, kolom);

    printf("Awal: \n");
    for (i = 0; i < baris; i++) {
        for (n = 0; n < kolom; n++) {
            num = rand() % 10;
            arr[i][n] = num;
            printf("%i  ", arr[i][n]);

        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < baris; i++) {
        for (n = 0; n < kolom; n++) {
            check = false;
            x = 0;
            for (x = 0; x < count; x++) {
                if (arr[i][n] == rep[x]) {
                    check = true;
                    }
                }
            
            if (!check) {
                rep[count-1] = arr[i][n];
                count++;
            }
        }
    }

    printf("\nGenap: ");
    for (i = 0; i < count; i++) {
        if (rep[i] % 2 == 0){
        printf("%i  ", rep[i]);
        }
    }

    printf("\nGanjil: ");
    for (i = 0; i < count; i++) {
        if (rep[i] % 2 == 1){
        printf("%i  ", rep[i]);
        }
    }
}