// Fibunachi seqence

# include<stdio.h>

int fib(int n);

int main(){
    int n;
    printf("Enter the number to print the seqence: ");
    scanf(" %d", &n);

    printf("%d\n", fib(n));
    return 0;

}

int fib(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    int fibnm1 = (n-1);
    int fibnm2 = (n-2);
    int fibN = fibnm1 + fibnm2;
    // printf("%d seqence is: %d\n", n, fibN);
    return fibN;
}
