#include <stdio.h>
#include <string.h>

int main() {
    char kata[150];
    int i, count = 0;

    printf("Masukkan kata: ");
    gets(kata);

    for (i = 0; i < strlen(kata); i++) {
        if (kata[i] == 'a') {
            count += 1;
        }
    }

    printf("Jumlah huruf a: %i", count);
}