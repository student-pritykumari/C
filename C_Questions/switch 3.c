#include <stdio.h>
int main()
{
    int marks;
    printf(" enter marks (0-100) :");
    scanf(" %d", &marks);

    switch (marks){
    case 0 ... 30: printf("Fail \n");
     break ;      
     case 31 ... 100: printf("Pass \n");
     break ;
     default : printf(" Null and void");
     }

return 0;
}   