#include <stdio.h>

int isPalindromeBinary(int num) {
    int reverse = 0;
    int original = num;

    while (num > 0) {
        reverse = (reverse << 1) | (num & 1);
        num >>= 1;
    }

    return original == reverse;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindromeBinary(num)) {
        printf("The binary representation of %d is a palindrome.\n", num);
    } else {
        printf("The binary representation of %d is not a palindrome.\n", num);
    }

    return 0;
}
