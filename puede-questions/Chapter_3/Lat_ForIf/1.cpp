// print ganjil genap #

#include <stdio.h>

int main() {

    int batas, i;
    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            printf("%i ", i);
        }
        else {
            printf("# ");
        }
    }
}