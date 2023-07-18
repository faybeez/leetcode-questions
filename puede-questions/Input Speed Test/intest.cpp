#include <stdio.h>
#include <iostream>
using namespace std;

/*scanf printf 0.53
int main () {
    int n, k, count = 0, i, num;

    scanf("%i %i", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%i", &num);
        if (num % k == 0) {
            count++;
        }
    }
    printf("%i", count);
}
*/

/* cin cout 1.59
int main () {
    int n, k, count = 0, i, num;

    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> num;
        if (num % k == 0) {
            count++;
        }
    }
    cout << count;
}
*/

/*fast input c 0.17
void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
     bool negative = false; 
     register int c; 
     number = 0; 

     // extract current character from buffer 
     c = getchar(); 
     if (c=='-') 
     { 
         // number is negative 
         negative = true; 
         // extract the next character from the buffer 
          c = getchar(); 
      } 

           // Keep on extracting characters if they are integers 
           // i.e ASCII Value lies from '0'(48) to '9' (57) 
           for (; (c>47 && c<58); c=getchar()) 
               number = number *10 + c - 48; 

           // if scanned input has a negative sign, negate the 
           // value of the input number 
           if (negative) 
               number *= -1; 
} 


int main() 
{ 
    int n, k, i, num, count = 0;
    fastscan(n);
    fastscan(k);

    for (i = 0; i < n; i++) {
        fastscan(num);
        if (num % k == 0) {
            count++;
        }
    }
    printf("%i", count);
}
*/

//c++ fast - 0.74
int main () {
    int n, k, count = 0, i, num;

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    cin >> n >> k;

    for (i = 0; i < n; i++) {
        cin >> num;
        if (num % k == 0) {
            count++;
        }
    }
    cout << count;
}