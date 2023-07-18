#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[50];
    int i, lenstring;
    bool palindrom = true;

    printf("Kalimat: ");
    gets(kalimat);
    lenstring = strlen(kalimat);

    for (i = 0; i < lenstring / 2; i++) {
        if (kalimat[i] != kalimat[lenstring-1 - i]) {
            printf("bukan palindrom");
            palindrom = false;
        }
    }
    if (palindrom) {
        printf("palindrom");
    }
}