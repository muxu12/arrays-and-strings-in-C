#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

void caesarEncrypt(char* str, int shift) {
    int i = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                str[i] = ((str[i] - 'a' + shift) % 26) + 'a';
            } else {
                str[i] = ((str[i] - 'A' + shift) % 26) + 'A';
            }
        }
        i++;
    }
}

int main() {
    char str[MAX_SIZE];
    int shift, direction;

    // Generate random numbers
    srand(time(NULL));
    shift = rand() % 10; // Generate a random number from 0 to 9
    direction = rand() % 2; // Generate a random number either 0 or 1

    printf("Random number of positions to shift: %d\n", shift);
    printf("Random direction (0: Left, 1: Right): %d\n", direction);

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    caesarEncrypt(str, shift * (direction == 0 ? -1 : 1));

    printf("Encrypted string: %s\n", str);

    return 0;
}
