#include <stdio.h>

int factorial(int n);

int main(){

    printf("factorial is : %d",factorial(5));

    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int factNum1 = factorial(n-1);
    int factNum = factNum1 * n;
    return factNum;
}