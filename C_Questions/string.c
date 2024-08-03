#include <stdio.h>

int stringLength(const char *str);

int main(){
    char str[100];

    //prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //calculate the length of the string
    int length = stringLength(str);

    //print the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}

//  Function to calculate the length of a string
int stringLength(const char *str){
    int length = 0;

    //iterate through the string until the null terminator is found
    while (str[length] != '\0'){
        length++;
    }

    //Adjust the newline character if using fgets
    if(str[length-1] == '\n'){
        length--;
    }
    return length;
}