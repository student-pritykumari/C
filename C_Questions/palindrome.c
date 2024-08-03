#include <stdio.h>
#include <string.h>

//function to check if a string is a palindrome
int isPalindrome(char str[]){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end){
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    } 
    return 1;
}

int main(){
    char str[100];

    printf("Enter a string: ");
    gets(str);//Read input string

    //check if the string is a palindrome
    if(isPalindrome(str)){
        printf("The string is a palindrome.\n");
    }else{
        printf("The string is a not a palindrome.\n");
    }

    return 0;
}