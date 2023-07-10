// print countdown

#include <stdio.h>

int main() {

    int batas, i;
    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = batas; i >= 1; i--) {
        printf("%i\n", i);
    }
}