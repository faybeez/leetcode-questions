#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[50];
    int i, lenstring;

    printf("Kalimat: ");
    gets(kalimat);
    lenstring = strlen(kalimat);

    printf("Hasil: ");

    for (i = 0; i < lenstring; i++) {
        if (kalimat[i] >= 65 && kalimat[i] <= 90) {
            printf("_%c", kalimat[i] + 32);
        }
        else if (kalimat[i] == '_') {
            i++;
            printf("%c", kalimat[i] - 32);
        }
        else {
            printf("%c", kalimat[i]);
        }
    }
}