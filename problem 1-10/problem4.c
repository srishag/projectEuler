#include <stdio.h>

int length(int pdt, int arr[]);
int isPalindrome(int length, int arr[]);

int main(void) {
   int i = 0, j = 0, product = 0;
   int lengthOfNum = 0, largest = 0;
   int arr[100];

   for(i = 999; i >= 100; i--) {
      for(j = 999; j >= 100; j--) {
         product = i*j;
         lengthOfNum = length(product, arr);

         if(isPalindrome(lengthOfNum, arr) && (product > largest)) {
            largest = product;
         }
      }
   }

   printf("%d\n", largest);
   return 0;
}

int length(int pdt, int arr[]) {
   int count = 0;

   while(pdt > 0) {
      arr[count] = pdt%10;
      pdt /= 10;
      count++;
   }
   return count;
}

int isPalindrome(int length, int arr[]) {
   int mid = length/2, i = 0;

   for(i = 0; i < mid; i++) {
      if(arr[i] != arr[length-i-1]) {
         return 0;
      }
   }
   return 1;
}
