#include <stdio.h>

//Function to copy one string to another
void stringCopy(char *destination, const char *source){
    //copy characters from source to destination until the null terms
    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }

    //Add null terminator to the end of the destination string
    *destination = '\0';
}

int main(){
    char source[100], destination[100];

    //Get the source string from the user
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    //Remove the newline character added by fgets
    size_t length = strlen(source);
    if(length > 0 && source[length - 1] == '\n'){
        source[length - 1] = '\0';
    }


//copy the source string to the destination string
stringCopy(destination, source);

// Display the copied string
printf("Copied string: %s\n",destination);

return 0;
}