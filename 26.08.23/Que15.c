#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char buffer[100]; // Buffer to store each line

    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file); // Close the file

    return 0;
}
