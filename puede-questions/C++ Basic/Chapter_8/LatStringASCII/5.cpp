#include <stdio.h>
#include <string.h>

int main() {
    char kata1[50], kata2[50], counter1[26], counter2[26];
    int i, lenstring1, lenstring2;
    bool anagram = true;

    for (i = 0; i < 26; i++) {
        counter1[i] = 0;
        counter2[i] = 0;
    }

    printf("kata 1: ");
    gets(kata1);
    printf("kata 2: ");
    gets(kata2);
    lenstring1 = strlen(kata1);
    lenstring2 = strlen(kata2);

    if (lenstring1 != lenstring2) {
        printf("bukan anagram");
    }
    else {
        for (i = 0; i < lenstring1; i++) {
            if (kata1[i] >= 65 && kata1[i] <= 90 && kata2[i] >= 65 && kata2[i] <= 90) {
                counter1[kata1[i] - 65]++;
                counter2[kata2[i] - 65]++;
            }
            else if (kata1[i] >= 65 && kata1[i] <= 90) {
                counter1[kata1[i] - 65]++;
                counter2[kata2[i] - 97]++;
            }
            else if (kata2[i] >= 65 && kata1[i] <= 90) {
                counter1[kata1[i] - 97]++;
                counter2[kata2[i] - 65]++;
            }
            else {
                counter1[kata1[i] - 97]++;
                counter2[kata2[i] - 97]++;
            }
        }

        for (i = 0; i < 26; i++) {
            if (counter1[i] != counter2[i]) {
                anagram = false;
                printf("bukan anagram");
                break;
            }
        }

        if (anagram) {
            printf("anagram");
        }
    }
}