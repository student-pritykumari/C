#include<stdio.h>

int calcpercentage(int math, int sci, int sanskrit);

int main(){
    int math = 94;
    int sci = 95;
    int sanskrit = 96;

    printf("the percentage is: %d", calcpercentage(math, sci,sanskrit));
    return 0;
}

int calcpercentage(int math,int sci, int sanskrit){
    return ((math + sci + sanskrit) / 3);
}