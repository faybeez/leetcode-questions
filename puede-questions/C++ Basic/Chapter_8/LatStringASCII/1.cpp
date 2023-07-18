#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[50];
    int kode, i, lenstring;

    printf("Pesan rahasia: ");
    gets(kalimat);
    printf("Kode: ");
    scanf("%i", &kode);
    lenstring = strlen(kalimat);

    printf("Hasil enkripsi: ");

    for (i = 0; i < lenstring; i++) {
        if (kalimat[i] >= 65 && kalimat[i] <= 122 - kode) {
            printf("%c", kalimat[i] + kode);
        }
        else if(kalimat[i] >= 122 - kode && kalimat[i] <= 122) {
            printf("%c", kalimat[i] + kode - 26);
        }
        else {
            printf("%c", kalimat[i]);
        }
    }
}