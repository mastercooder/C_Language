#include<stdio.h>

void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
}

void makeArray(int arr[], int size){
    printf("Enter Array Here: \n");
    printf("\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
}

int arrayInsertataion(int arr[], int size, int element, int capacity, int index){
    // Code for Insertion
    if(size>=capacity){
        return -1;
    }
    
    for (int i = size; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("\n");
    int arr[size];
    makeArray(arr, size);

    printf("\n");
    printf("Before Inseration: \n");
    int element = 4, index = 3;
    displayArray(arr, size);
    arrayInsertataion(arr, size, element, 100, index);
    printf("\n");
    size +=1;
    printf("\n");
    printf("After Inversation\n");
    displayArray(arr, size);
    return 0;
}