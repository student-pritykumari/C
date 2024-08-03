#include <stdio.h>
int main()
{
 char ch;
 printf("enter a character :");
 scanf("%c",&ch);
 // getting information from the user
 if (ch >= 'A' && ch <= 'Z'){
    printf("upper case \n");
 } else if (ch >= 'a' && ch <= 'z'){
    printf("lower case \n");
 }else{
   printf("not an English character");
 }

    return 0;
}