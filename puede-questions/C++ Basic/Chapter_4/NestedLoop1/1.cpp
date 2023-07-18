#include <stdio.h>

int main() {
    int i, x, batas;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 1; i <= batas; i++) {
        for (x = 1; x <= batas; x++) {
            printf("%i ", x);
        }
        printf("\n");
    }
}