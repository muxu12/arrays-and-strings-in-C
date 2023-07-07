#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int num, row, col;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Search for the number in the array
    int found = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == num) {
                found = 1;
                row = i;
                col = j;
                break;
            }
        }
        if (found)
            break;
    }
    
    if (found)
        printf("Number %d found at row %d and column %d.\n", num, row, col);
    else
        printf("Number %d not found in the array.\n", num);
    
    return 0;
}
