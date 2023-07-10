// print fibbonacci

#include <stdio.h>


int main() {

    int i, s = 1, sb = 0, b, batas, total;
    printf("Masukkan batas: ");
    scanf("%i", &batas);
    
    for (i = 1; i < batas; i++) { 
        printf("%i + ", s);

        total += s;
        b = s + sb;

        sb = s;
        s = b;
    }

    total += s;
    
    printf("%i = %i", s, total);
}