#include <stdio.h>

void reverse(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    printf("\n");
    printf("Question 3) Write a function to reverse an array.\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("Original array:\n");
    printArray(arr, n);

    reverse(arr, n);

    printf("\nReversed array:\n");
    printArray(arr, n);

    printf("\n");
    return 0;
}

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
