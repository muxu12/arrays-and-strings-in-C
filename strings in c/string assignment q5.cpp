#include <stdio.h>
#include <string.h>

int findLastSubstring(const char* str, const char* substr) {
    int strLength = strlen(str);
    int substrLength = strlen(substr);
    int lastIndex = -1;

    for (int i = 0; i <= strLength - substrLength; i++) {
        int j;
        for (j = 0; j < substrLength; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }

        if (j == substrLength) {
            lastIndex = i;
        }
    }

    return lastIndex;
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

    int index = findLastSubstring(str, substr);

    if (index != -1) {
        printf("Last occurrence of substring '%s' found at index %d.\n", substr, index);
    } else {
        printf("Substring '%s' not found.\n", substr);
    }

    return 0;
}
