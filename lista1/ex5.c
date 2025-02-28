#include <stdio.h>

int main() {
    // Open a file named "gatos.txt" in write mode
    FILE *file = fopen("gatos.txt", "w");
    if (file == NULL) {
        // If the file cannot be opened, print an error message
        perror("Error opening file");
        return 1;
    }

    // Write a phrase to the file
    fprintf(file, "I love cats\n");
    // Close the file
    fclose(file);

    // Print a success message to the console
    printf("File created and phrase written successfully.\n");
    return 0;
}