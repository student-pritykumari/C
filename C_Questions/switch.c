#include <stdio.h>
int main()
{
int marks;
printf("enter marks (1-100) :");
scanf("%d",&marks);

switch (marks){
    case 0 ... 30: printf("C \n");
    break ;
    case 31 ... 69: printf("B \n");
    break ;
    case 70 ... 89: printf("A \n");
    break ;
    case 90 ... 100: printf("A+ \n");
    break ;
    default : printf(" Null & void");
}
return 0;
}