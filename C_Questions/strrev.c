#include <stdio.h>
#include <string.h>

//Function prototype
void reverseString(char *str);

int main(){
    char str[100];

    //prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);

    //remove the newline character if it is present
    str[strcspn(str,"\n")] = '\0';

    //Reverse the reversed string
    printf(" Reversed string: %s\n" , str);

    return 0;
}

//Function to reverse a stringHYUT

void reverseString(char *str){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    //swap characters from both of the string
    while ( start < end){
        //swap the characters
        temp = str[end];
        str[start] = str[end];
        str[end] = temp;

        //Move towards the middle
        start++;
        end--;
    }
}