#include <stdio.h>

int main(void) {
   long n = 600851475143;
   long i = 0;

   for(i = 3; n  > 1; i+=2) {
      while(n%i == 0) {
         n /= i;
      }
   }

   printf("%ld\n", (i-2));
   return 0;
}
