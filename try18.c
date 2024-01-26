# include<stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main(){
    int number;

    while (1){
        printf("Enter the number which table you want to print: ");
        scanf("%d", &number);

        if (number==-1){
            printf("Exiting the Command");
            break;
        }

        int table[1][10];
        storeTable(table, 0, 10, number);

        for (int i = 0; i<10; i++){
            printf("%d\t", table[0][i]);
        }
        printf(" \n");
    }
    
    
    return 0;
}

void storeTable(int arr[][10], int n, int m, int number){
    for (int i = 0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}