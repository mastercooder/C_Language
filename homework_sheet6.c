# include<stdio.h>

int xfind(int arr[], int n, int x);
void showarray(int arr[], int n);
int maxvalue(int arr[], int n);

int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            printf("\n");
            printf(" Question 1) In an array of numbers, find how many time does a number x occurs ?\n");
            printf("---------------------------------------------------------------------------------\n");
            printf("\n");

            int n;
            printf("Enter the number of array you want to enter: ");
            scanf("%d", &n);

            int arr[n];
            printf("Enter the number of array: \n");
            for (int i = 0; i<n; i++){
                scanf("%d", &arr[i]);
            }

            int x;
            printf("Enter what number you want to find: ");
            scanf("%d", &x);

            printf("\n");
            printf("-------------------------------\n");
            printf("%d occur in your array %d times \n", x, xfind(arr, n, x));
            printf("-------------------------------\n");
            printf("\n");
            printf("Your entered array\n");
            showarray(arr, n);
            break;
        }

        case 2:{
            printf("\n");
            printf(" Question 2) Write a program to print the largest number in an array ?\n");
            printf("---------------------------------------------------------------------------------\n");
            printf("\n");

            int n;
            printf("Enter the number of array you want to enter: ");
            scanf("%d", &n);

            int arr[n];
            printf("Enter the number of array: \n");
            for (int i = 0; i<n; i++){
                scanf("%d", &arr[i]);
            }

            printf("\n");
            printf("---------------------------\n");
            printf("The largest number is: %d\n", maxvalue(arr, n));
            printf("---------------------------\n");
            printf("\n");
        }

        case 3:{
            printf("\n");
            printf(" Question 3) Write a program to insert a value at the end of an array ?\n");
            printf("------------------------------------------------------------------------\n");
            printf("\n");

            int arr[] = {1, 2, 3, 4, 5};
            printf("\n");
            printf("Before adding array\n");
            showarray(arr, 4);


            printf("Enter the numebr you want to enter: ");
            scanf("%d", &arr[5]);
            printf("\n");
            printf("After adding");
            showarray(arr, 5);
            break;

            
        }

        default:
            printf("Something went wrong");
            break;
        }   
}

int xfind(int arr[], int n, int x){
    int count = 0;

    for (int i = 0; i<n; i++){
        if (arr[i]==x){
            count++;
        }
    }
    return count;
}

void showarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int maxvalue(int arr[], int n){
    int maxval = arr[0];

    for (int i = 0; i<n; i++){
        if (arr[i] > maxval){
            maxval = arr[i];
        }
    }
return maxval;
}
