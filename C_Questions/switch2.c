#include <stdio.h>
int main()
{
    int m;
    printf("enter your marks :");
    scanf("%d",&m);

switch(m)
{
    case 61 ... 100:
    printf("first division");
    break;
    case 45 ... 60:
    printf("second division");
    break;
    case 23 ... 44:
    printf("third division");
    break;
    default:
    printf("fail");
    return 0;
}
}