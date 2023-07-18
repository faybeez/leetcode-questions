#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, count = 1, bilbaru = 0;
    char bilangan[50] = "";

    printf("Masukkan bilangan: ");
    scanf(" %s", &bilangan);

    int len = strlen(bilangan);

    for (i = len-1; i >= 0; i--) {
        if((bilangan[i] - 48) % 2 == 1) {
            bilbaru += (bilangan[i] - 48) * (count);
            count *= 10;
        }
    }
    printf("Bilangan baru: %i\nHasil kuardrat: %i", bilbaru, bilbaru * bilbaru);
}