//nambah 2 bilangan yang besar > 10^3000
#include <stdio.h>
#include <string.h>

int main() {
    char bil1[3005], bil2[3005], result[3500];
    int i=0, lenstring1, lenstring2, lenresult, carryover = 0, diff = 0, add;

    printf("bilangan 1: ");
    gets(bil1);
    printf("bilangan 2: ");
    gets(bil2);
    lenstring1 = strlen(bil1)-1;
    lenstring2 = strlen(bil2)-1;
    
    while(true)
	{
		add = 0;
		if( lenstring1 >=0)
        	add = add + (bil1[lenstring1] - 48 );
		
		if( lenstring2 >=0)
			add = add + (bil2[lenstring2] - 48 );
		
		add = add + carryover;
		carryover = 0;

        if (add >= 10) {
            carryover = add / 10;
            add = add % 10;
        }
        result[i] = add;
        i ++;
        
        lenstring1--;
        lenstring2--;
        if ( lenstring1 <0 && lenstring2 <0)
        	break;
    }

    if (carryover != 0) {
        printf("%i", carryover);
    }
    for (int a = i-1; a >=0 ; a--) {
        printf("%i", result[a]);
    }
}


/*
#include <stdio.h>
#include <string.h>

int main() {
    char bil1[3000], bil2[3000], result[3500];
    int i, lenstring1, lenstring2, lenresult, carryover = 0, diff = 0, add;

    printf("bilangan 1: ");
    gets(bil1);
    printf("bilangan 2: ");
    gets(bil2);
    lenstring1 = strlen(bil1);
    lenstring2 = strlen(bil2);
    
    if (lenstring1 > lenstring2) {
        diff = lenstring1 - lenstring2;

        for (i = lenstring2 - 1; i >= 0; i--) {
            add = bil1[i + diff] - 48 + bil2[i] - 48 + carryover;

            if (add >= 10) {
                carryover = add / 10;
                result[i+diff] = add % 10;
            }
            else {
                result[i + diff] = add;
                carryover = 0;
            }
        }

        for (i = diff - 1; i >= 0; i--) {
            add = bil1[i] - 48+ carryover;

            if (add >= 10) {
                carryover = result[i] / 10;
                result[i] = add % 10;
            }
            else {
                result[i] = add;
                carryover = 0;
            }
        }
    }  
    else if (lenstring2 > lenstring1) {
        diff = lenstring2 - lenstring1;

        for (i = lenstring1 - 1; i >= 0; i--) {
                add = bil1[i] - 48 + bil2[i+diff] - 48 + carryover;

                if (add >= 10) {
                    carryover = result[i+diff] / 10;
                    result[i+diff] = add % 10;
                }
                else {
                    result[i+diff] = add;
                    carryover = 0;
                }
            }
        for (i = diff - 1; i >= 0; i--) {
            add = bil2[i] - 48 + carryover;

            if (add >= 10) {
                carryover = result[i] / 10;
                result[i] %= 10;
            }
            else {
                result[i] = add;
                carryover = 0;
            }
        }
    }
    else {
        for (i = lenstring1 - 1; i >= 0; i--) {
            add = bil1[i] - 48 + bil2[i] - 48 + carryover;

            if (add >= 10) {
                carryover = add / 10;
                result[i] = add % 10;
            }
            else {
                result[i] = add;
                carryover = 0;
            }
        }
    }

    lenresult = strlen(result);

    if (carryover != 0) {
        printf("%i", carryover);
    }
    for (i = 0; i < lenresult; i++) {
        printf("%i", result[i]);
    }
}


*/