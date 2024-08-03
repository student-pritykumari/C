#include <stdio.h>
int main()
{
    int age;
    printf("enter the age : ");
    scanf("%d", &age);
    // if(age >= 19){
    // printf("adult \n");

    // }
    // else if(age < 13 && age < 19)
    // {
    // printf("teenager \n");
    // }
    // else{
    // printf("child");
    // }

    age <= 19 ? printf(" teenager\n") : printf("Adult \n");
    return 0;
}