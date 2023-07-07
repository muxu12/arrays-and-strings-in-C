#include <stdio.h>

// Function to find the LCM of two numbers
int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

// Function to find the LCM of an array of numbers
int findLCMArray(int arr[], int n) {
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;
    int arr[10];

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int lcm = findLCMArray(arr, n);

    printf("LCM: %d\n", lcm);

    return 0;
}
