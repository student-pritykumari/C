#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char operation[100];
    char command[200];

    // Open the source file
    file = fopen("operation.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Could not open file operation.txt\n");
        return 1;
    }

    // Read the operation from the file
    if (fgets(operation, sizeof(operation), file) == NULL) {
        fprintf(stderr, "Error reading from file operation.txt\n");
        fclose(file);
        return 1;
    }

    // Close the source file
    fclose(file);

    // Remove newline character from the end of the operation string
    operation[strcspn(operation, "\n")] = 0;

    // Generate the shell command
    snprintf(command, sizeof(command), "echo '%s' | bc", operation);

    // Print the command
    printf("Generated Command: %s\n", command);

    // Execute the command
    system(command);

    return 0;
}
