#include <stdio.h>

void copyFileContent(const char *sourceFile, const char *destinationFile){
    FILE *source, *destination;
    char ch;

    //open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL){
        perror("Error opening source file");
        return;
    }

    //open the destination file in write mode
    destination = fopen(destinationFile,"w");
    if (destination == NULL){
        perror("Error opening destination file");
        fclose(source);
        return;
    }

    //copy the content from the source file to the destination file
    while ((ch = fgetc(source)) != EOF){
        fputc(ch, destination);

        //display the cotent on the console
        putchar(ch);
    }

    //close the files
    fclose(source);
    fclose(destination);
}

int main(){
    char sourceFile[100], destinationFile[100];

    //get the source and destination file names from the user
    printf("Enter the source file name:");
    scanf("%s", sourceFile);
    printf("Enter the destination file name:");
    scanf("%s", destinationFile);

    //copy the content from the source file to the destination file and display it on the console 
    copyFileContent(sourceFile, destinationFile);

    return 0;
}