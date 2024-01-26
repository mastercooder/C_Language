#include <stdio.h>

int main()
{
    int rows;
    printf("Enter how many rows you want to print: ");
    scanf("%d", &rows);

    printf("\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}