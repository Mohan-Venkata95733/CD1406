#include <stdio.h>

int main() {
    FILE *input = fopen("spaceandline.txt", "r");
    if (!input) {
        perror("Failed to open input file");
        return 1;
    }

    int ch;
    int whitespace_count = 0;
    int newline_count = 0;

    while ((ch = fgetc(input)) != EOF) {
        if (ch == ' ' || ch == '\t') {
            whitespace_count++;  // Count spaces and tabs as whitespace
        } else if (ch == '\n') {
            newline_count++;  // Count newline characters
        }
    }

    // Output counts (adjusting counts similarly to the Flex version)
    printf("Whitespace characters: %d\n", whitespace_count);
    printf("Newline characters: %d\n", newline_count+1);

    fclose(input);
    return 0;
}

