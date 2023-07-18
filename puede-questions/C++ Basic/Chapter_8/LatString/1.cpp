#include <stdio.h>
#include <string.h>

int main() {
    char kata[50];
    int i;

    printf("Masukkan kata: ");
    scanf("%s", &kata);
    printf("Reverse: ");


    for (i = strlen(kata) - 1; i >= 0; i--) {
        printf("%c", kata[i]);
    }
}