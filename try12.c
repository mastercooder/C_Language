#include <stdio.h>

// Declare the function prototype
char* hotorcold(int n);

int main() {
    printf("\n");
    printf("Question 3: Write a function to calculate Hot or cold depending on the temperature user enters?\n");
    printf("----------------------------------------------------------------------------------------------------\n");
    int n;
    printf("\n");
    printf("Enter the temperature: ");
    scanf("%d", &n);

    printf("\n");
    printf("-------------------------------------\n");
    printf("%s\n", hotorcold(n));
    printf("-------------------------------------\n");
    printf("\n");
}

// Define the function to return a string
char* hotorcold(int n) {
    // Static strings to return
    static char cold[] = "Cold";
    static char hot[] = "Hot";
    
    if (n <= 20) {
        return cold;
    } else {
        return hot;
    }
}
