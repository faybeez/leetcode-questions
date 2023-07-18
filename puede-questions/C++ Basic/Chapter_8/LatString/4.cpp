#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    char kata[100], vowel[5] = {'a', 'i', 'u', 'e', 'o'};
    int counter[5] = {0, 0, 0, 0, 0}, i, x;

    printf("Masukkan kalimat: ");
    gets(kata);

    for (i = 0; i < strlen(kata); i++) {
        switch (kata[i])
        {
        case 'a':
            counter[0]++;
            break;
        case 'i':
            counter[1]++;
            break;
        case 'u':
            counter[2]++;
            break;
        case 'e':  
            counter[3]++;
            break;
        case 'o':
            counter[4]++;
            break;
        }
    }
    for (i = 0; i < 5; i++) {
         printf("Huruf %c: %i (", vowel[i], counter[i]);
         for (x = 1; x <= counter[i]; x++) {
            printf("*");
         }
         printf(")\n");
    }
}