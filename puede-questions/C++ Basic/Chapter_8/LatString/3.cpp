#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int counter = 1, len, i;
    bool check = true;

    printf("Masukkan kalimat: ");
    gets(kalimat);
    len = strlen(kalimat);

    for(i = 0; i < len; i++) {
        if (kalimat[i] == ' ' && check) {
            check = false;
            counter ++;
        }
        else if (kalimat[i] != ' ') {
            check = true;
        }
    }
    printf("Jumlah kata: %i", counter);
}