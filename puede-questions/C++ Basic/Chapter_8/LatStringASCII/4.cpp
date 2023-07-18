#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[50];
    int i, lenstring, counter[26];

    for (i = 0; i < 26; i++) {
        counter[i] = 0;
    }

    printf("Kalimat: ");
    gets(kalimat);
    lenstring = strlen(kalimat);

    for (i = 0; i < lenstring; i++) {
        counter[kalimat[i] - 97]++;
    }

    for (i = 0; i < 26; i++) {
        printf("%c : %i\n", i + 97, counter[i]);
    }   
}