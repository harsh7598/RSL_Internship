#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w"); // Open file in write mode

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write lines to the file
    fprintf(file, "This is the first line.\n");
    fprintf(file, "This is the second line.\n");
    fprintf(file, "And this is the third line.\n");

    fclose(file); // Close the file

    printf("Lines written to the file.\n");

    return 0;
}
