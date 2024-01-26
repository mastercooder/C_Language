# include<stdio.h>

void reverase(int arr[], int n);
void printArray(int arr[], int n);


int main(){
    printf("\n");
        printf(" Question 3) Write a function reverse an array ?\n");
        printf("-------------------------------------------------\n");
        printf("\n");

        int n;
        printf("Enter the length of array: ");
        scanf("%d", &n);
        int arr[n];

        printf("Enter the %d Element: \n", n);
        for(int i=0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        printf("Orignal orde\n");
        printArray(arr, n);

        reverase(arr, n);

        printf("Reverse order\n");
        printArray(arr, n);
        return 0;
}

void reverase(int arr[], int n){
    for (int i = 0; i<n/2; i++){ 
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}