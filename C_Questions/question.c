#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char source[20];
    char destination[20];
    float fare;

    // getting input from the user
    printf(" enter the name :");
    scanf("%c", &name);
    printf("enter age :");
    scanf("%d",&age);
    printf("enter source :");
    scanf("%c",&source);
    printf("enter fare :");
    scanf("%f",&fare);

    // printing the bus ticket
    printf("\n\n --------------------------------- \n");
    printf("\n            BUS TICKET                \n");
    printf(" -------------------------------------\n");
    printf("Name: %c\n",name);
    printf("Age:%d\n",age);
    printf("Source: %c\n",source);
    printf("Destination: %c\n",destination);
    printf("Fare: %f\n",fare);

    return 0;
}