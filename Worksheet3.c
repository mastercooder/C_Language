# include<stdio.h>

int Countodd(int arr[], int n);
void reverase(int arr[], int n);
void printArray(int arr[], int n);
void printTable(int arr[][10 ], int n, int m, int number);


int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            printf("\n");
            printf(" Question 1) Write a function to count the odd numbers in an array ?\n");
            printf("----------------------------------------------------------------------\n");
            printf("\n");

            int n;
            printf("How many number you want to enter: ");
            scanf("%d", &n);

            int arr[n];
            for (int i = 0; i<n; i++){
                printf("Enter the number: \n");
                scanf("%d", &arr[i]);
            }

            printf(" \n");
            printf("----------------------------------\n");
            printf("The number of odd number is : %d\n", Countodd(arr, n));
            printf("----------------------------------\n");
            printf(" \n");
            break;
        }

        case 2:{
            printf("\n");
            printf("                   int arr[] = {1, 2, 3, 4, 5}                 \n");
            printf(" Question 2) For the given array what will the following give ?\n");
            printf("----------------------------------------------------------------------\n");
            printf("             a) *(arr+2)              b) *(arr+5)");
            printf("\n");

            int arr[] = {1, 2, 3, 4, 5};
            printf(" \n");
            printf("------------------------------------------------\n");
            printf("a) will give : %d  and   b) will give  : %d\n", *(arr+2), *(arr+5));
            printf("------------------------------------------------\n");
            printf(" \n");
            break; 
        }

        case 3:{
            printf("\n");
            printf(" Question 3) Write a function reverse an array ?\n");
            printf("-------------------------------------------------\n");
            printf("\n");

            int n;
            printf("Enter the length of array: ");
            scanf("%d", &n);
            int arr[n];

            printf("Enter %d element: \n", n);
            for (int i = 0; i<n; i++){
                scanf("%d", &arr[i]);
            }

            printf("Orignal array\n");
            printArray(arr, n);

            reverase(arr, n);

            printf("Reverse Array\n");
            printArray(arr, n);
            break;  
        }

        case 4:{
            printf("\n");
            printf(" Question 4) Write a program to print first n fibonacci number ?\n");
            printf("------------------------------------------------------------------\n");
            printf("\n");

            int n;
            printf("Enter the number (n>2):  ");
            scanf("%d", &n);

            int fib[n];
            fib[0] = 0;
            fib[1] = 1;

            for (int i = 2; i<n; i++){
                fib[i] = fib[i-1] + fib[i-2];
                printf("%d\t", fib[i]);
            }
            break;
        }

        case 5:{
            printf("\n");
            printf(" Question 5) Create a 2D array store the table of 2 and 3 ?\n");
            printf("------------------------------------------------------------\n");
            printf("\n");

            int table[2][10];

            printTable(table, 0, 10, 2);
            printTable(table, 1, 10, 3);

            for (int i = 0; i < 10; i++){
                printf(" %d\t", table[0][i]);
            }
            printf(" \n");

            for (int i = 0; i < 10; i++){
                printf(" %d\t", table[1][i]);
            }
            break;
            
        }

        default:
            printf("Something went wrong.");
            break;
        }
    }


int Countodd(int arr[], int n){
    int count = 0;

    for (int i=0; i<n; i++){
        if (arr[i]%2 != 0){
            count++;
        }
    }

    return count;
}

void reverase(int arr[], int n){
    for (int i = 0; i<n/2; i++){
        int value = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = value;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void printTable(int arr[][10], int n, int m, int number){
    for (int i = 0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}