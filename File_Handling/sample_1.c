#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // --- Writing to file ---
    fp = fopen("example.txt", "w");   // open file in write mode
    if (fp == NULL) {
        printf("File not created!\n");
        return 1;
    }

    printf("Enter some text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);   // write to file
    fclose(fp);

    // --- Reading from file ---
    fp = fopen("example.txt", "r");   // open file in read mode
    if (fp == NULL) {
        printf("Cannot open file for reading!\n");
        return 1;
    }

    printf("\nReading the file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);   // print file content
    }

    fclose(fp);
    return 0;
}
