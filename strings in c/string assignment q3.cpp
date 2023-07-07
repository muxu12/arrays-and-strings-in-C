#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void addSuffix(char* str) {
    int length = strlen(str);

    if (length < 3) {
        // String length is less than 3, leave it unchanged
        return;
    }

    if (strcmp(str + length - 3, "ing") == 0) {
        // String ends with 'ing', replace with 'ly'
        strcpy(str + length - 3, "ly");
    } else {
        // Append 'ing' at the end of the string
        strcat(str, "ing");
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    addSuffix(str);

    printf("Result: %s\n", str);

    return 0;
}