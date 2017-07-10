#include <stdio.h>
#define MAX 4000000

int main(void) {
   int num1 = 1, num2 = 2, temp = 0, sum = 0;

   while(num2<MAX) {

      if(num2 % 2 == 0) {
         sum+=num2;
      }

      temp = num1+num2;
      num1 = num2;
      num2 = temp;
   }

   printf("%d\n", sum);
   return 0;
}
