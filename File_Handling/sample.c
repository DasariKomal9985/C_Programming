#include <stdio.h>

int main() {
    FILE *fp;
    
    // ---- WRITE TO FILE ----
    fp = fopen("data.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "File handling in C is easy!");
    fclose(fp);

    // ---- READ FROM FILE ----
    fp = fopen("data.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    printf("File Content:\n");
    
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
