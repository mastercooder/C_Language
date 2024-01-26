# include<stdio.h>

int sum(int x, int y);

int main(){
    int a,b;

    printf("Enter the first number: \n");
    scanf("%d", &a);
    
    printf("Enter the Second number: \n");
    scanf("%d", &b);

    int s = sum(a, b);

    printf(" \n");
    printf("The sum of the number you have entered is: %d", s);
}

int sum(int x, int y){
    return x+y;
}