/*
Problem Statement:
Find out the digital Root of a user given number n.
As example -
1) n = 132 => 1 + 3 + 2 = 6 (Single Digit)
   So, 6 is the Digital Root of 132
2) n = 407 => 4 + 0 + 7 = 11 => 1 + 1 = 2 (Single Digit)
   So, 2 is the Digital Root of 407
3) n = 199 => 1 + 9 + 9 = 19 => 1 + 9 = 10 => 1 + 0 = 1 (Single Digit)
   So, 1 is the Digital Root of 199
Write a program in C to find the Digital Root of one user given number n.
*/

   
#include <stdio.h>

int main() {
   unsigned int number, temp, digital_root = 0;
   printf("Enter a positive number: ");
   scanf("%u", &number);
   temp = number;
   while(temp != 0) {
      int digit = temp % 10;
      digital_root += digit;
      temp /=10;
      if(temp == 0 && digital_root > 9) {
         temp = digital_root;
         digital_root = 0;
      }
   }
    printf("The digital root of %u is %u\n", number, digital_root);
   return 0;
}