# include<stdio.h>

int main(){
    int aadhar[5];

    printf("--------------------------\n");
    printf(" \n");
    printf("1st Subject = English\n");
    printf("2st Subject = Accounts\n");
    printf("3st Subject = Economics\n");
    printf("4st Subject = Bussiness Studies\n");
    printf("5st Subject = IT / Hindi / Retail\n");
    printf(" \n");
    printf("--------------------------\n");

    // input
    for (int i=0; i<5; i++){
        printf("Enter your %dst subect marks\n", i);
        scanf(" %d", &aadhar[i]);
    }
    printf(" \n");

    for(int i = 0; i<5; i++){
        printf("%d = %d\n", i, aadhar[i]);
    }
    return 0;
}