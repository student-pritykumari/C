#include <stdio.h>
int main()
{
    int n, reverse = 0;
    printf("enter a number to reverse");
    scanf("%d",&n);
    while(n != 0)
    reverse = reverse * 10;
    reverse = reverse + n%10;
    n = n/10;
        printf("reverse of the entered number is =  %d\n", reverse);
    return 0;
}
