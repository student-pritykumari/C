#include <stdio.h>

void stringConcat(char *destination, const  char *source){

    //find the length of the destination string
    int destLen = 0;
    while (destination[destLen] != '\0'){
        destLen++;
    }

    //Append each character of the source string to the destination
    int i;
    for(i=0;source[i] != '\0'; i++){
        destination[destLen+i] = source[i];
    }

    // Null-terminate the concentrated string
    destination[destLen+i] = '\0';

}

int main(){
    char str1[100], str2[100];

    //input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    //Remove the newline character added by fgets
    str1[strcspn(str1,"\n")] = 0;

    //input the second string
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);

    //Remove the newline character added by fgets
    str2[strcspn(str2,"\n")] = 0;

    //Concatenate str2 to str1
    stringConcat(str1,str2);

    //print the concatenate string
    printf("Concatenated string: %s\n",str1);

    return 0;
    
}