#include <stdio.h>
#include <string.h>

int findSubstring(const char* str, const char* substr) {
    int strLength = strlen(str);
    int substrLength = strlen(substr);

    for (int i = 0; i <= strLength - substrLength; i++) {
        int j;
        for (j = 0; j < substrLength; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }

        if (j == substrLength) {
            return i;
        }
    }

    return -1; // Substring not found
}

int main() {
    char str[100];
    char substr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    printf("Enter a substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; // Remove the trailing newline character

    int index = findSubstring(str, substr);

    if (index != -1) {
        printf("Substring '%s' found at index %d.\n", substr, index);
    } else {
        printf("Substring '%s' not found.\n", substr);
    }

    return 0;
}
 