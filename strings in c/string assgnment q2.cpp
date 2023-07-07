#include <stdio.h>

#define MAX_SIZE 100

void countCharacters(const char* str, int* charCount) {
    // Initialize the character count array to all zeros
    for (int i = 0; i < 256; i++) {
        charCount[i] = 0;
    }

    // Iterate through each character of the string
    int i = 0;
    while (str[i] != '\0') {
        // Increment the count of the current character
        charCount[(unsigned char)str[i]]++;
        i++;
    }
}

int main() {
    char str[MAX_SIZE];
    int charCount[256] = { 0 };

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str, charCount);

    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("%c: %d\n", (char)i, charCount[i]);
        }
    }

    return 0;
}
