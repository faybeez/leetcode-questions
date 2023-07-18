#include <stdio.h>

bool prima(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, angka1;

    printf("Masukkan N: ");
    scanf("%i", &n);

    for (angka1 = 2; angka1 < n; angka1++) {
        if (prima(angka1) && prima(n - angka1)) {
            printf("%i dan %i\n", angka1, n - angka1);
        }
    }
}