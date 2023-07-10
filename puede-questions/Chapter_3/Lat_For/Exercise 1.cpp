// print Puede loop

#include <stdio.h>

int main() {

    int batas, i;
    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 1; i <= batas; i++) {
        printf("%i. Puede\n", i);
    }
}