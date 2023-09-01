#include <stdio.h>

int main(){

    FILE *file = fopen("sample.txt", "w");
    if(file == NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    fprintf(file, "Hello this is a sample text.\n");
    fprintf(file, "Welcome to RSL Solutions.\n");

    fclose(file);

    file = fopen("sample.txt", "r");

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