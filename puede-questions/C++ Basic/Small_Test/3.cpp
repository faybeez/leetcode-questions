#include <stdio.h>

void data(bool book[], int start, int end) {
    int i = start;
    while (true) {
        book[i-1] = true;

        i++;

        if (i > end && end > start) {
            break;
        }
        else if (i > 24) {
            i = 1;
            start = 0;
        }
    }
}

int main() {
    int p1m, p1a, p2m, p2a, i, sama1 = 0, sama2 = 0, n;
    bool p1[24], p2[24];

    for(i = 0; i < 24; i++) {
        p1[i] = 0;
        p2[i] = 0;
    }


    printf("Penyiar 1 mulai pada jam: ");
    scanf("%i", &p1m);
    printf("Penyiar 1 selesai pada jam: ");
    scanf("%i", &p1a);
    printf("Penyiar 2 mulai pada jam: ");
    scanf("%i", &p2m);
    printf("Penyiar 2 selesai pada jam: ");
    scanf("%i", &p2a);

    
    data(p1, p1m, p1a);
    data(p2, p2m, p2a);

    for (i = 0; i < 24; i++) {
        p1[i] &= p2[i];
    }

    for (i = 0; i < 24; i++) {
        if (p1[i] == 1) {
            sama1 = i + 1;
            i++;
            while (p1[i] == 1) {
                i++;
                if (i > 24) {
                    break;
                }
            }
            if (i < 24) {
                sama2 = i;
            }
        }
    }
    
    if (sama1 == 0 && sama2 == 0) {
        printf("Kedua penyiar tidak pernah melakukan siaran bersamaan.");
    }
    else {
        printf("Kedua penyiar melakukan siaran bersamaan dari jam %i sampai jam %i.", sama1, sama2);
    }
}