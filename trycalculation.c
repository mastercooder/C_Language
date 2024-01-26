# include<stdio.h>

int squareroot(int n);

int main(){
    int n;
    printf("Enter the number to find the square root: ");
    scanf("%d", &n);
    int square = squareroot(n);
    printf("------------------------------\n");
    printf("Square Root is : %d\n", square);
    printf("------------------------------\n");
    return 0;
}

int squareroot(int n){
    return n * n;
}