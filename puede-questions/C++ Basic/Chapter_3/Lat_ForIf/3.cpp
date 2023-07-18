// print tambah genap2

#include <stdio.h>

int main() {

    int batas, i, angka = 0;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 1; i <=batas; i++) 
	{
		if ( i % 2 == 0)
		{
			if ( i == batas || i == batas -1)
				printf("%i = ", i);
			else
        		printf("%i + ", i);
        	angka += i;
        }
    }
	printf("%i", angka);    
}

/*
#include <stdio.h>

int main() {

    int batas, i, angka = 0;

    printf("Masukkan batas: ");
    scanf("%i", &batas);

    for (i = 2; i < batas-2; i+= 2) {
        printf("%i + ", i);
        angka += i;
    }

    if (batas % 2 == 0) {
        angka += batas-2;
        printf("%i + ", batas-2);

        angka += batas;
        printf("%i = %i", batas, angka);
    }
    else {
        angka += batas-1;
        printf("%i = %i", batas-1, angka);
    }
    
}
*/
