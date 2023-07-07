#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;

    // Iterate until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
