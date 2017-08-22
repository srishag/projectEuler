#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int sumOfSq = 0, sum = 0, sqOfSum = 0;
   int i = 0;

   for(i = 1; i <= 100; i++) {
      sumOfSq += (i*i);
      sum += i;
   }

   sqOfSum = sum*sum;
   printf("%d\n", sqOfSum-sumOfSq);
   return 0;
}
