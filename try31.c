#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for left alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print asterisks for the pyramid
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}
