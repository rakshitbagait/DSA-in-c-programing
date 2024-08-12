#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char buffer[1024];  // Buffer to hold each line of the file

    // Attempt to open the file
    fp = fopen("sample.csv", "r");
    
    // Check if the file was opened successfully
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read and print each line of the file
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
