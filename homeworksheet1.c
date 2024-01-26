# include<stdio.h>

int main(){
    printf(" \n");
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    if (query==1){
        printf(" \n");
        printf("Q1) Write a program to print the average of 3 numbers?\n");
        printf(" \n");

        int a, b, c;

        printf("Enter the number 1: ");
        scanf("%d", &a);

        printf("Enter the number 2: ");
        scanf("%d", &b);

        printf("Enter the number 3: ");
        scanf("%d", &c);

        printf("--------------------------------------\n");
        printf(" The averate of the numberes are: %d\n", (a+b+c)/3);
        printf("--------------------------------------\n");                 
    }
    else if (query==2){
        printf(" \n");
        printf("WAP to check if the given character is a digit or not?\n");
        printf(" \n");

        char sentence;
        printf("Enter the sentence: ");
        scanf("%s", &sentence);

        printf("%s", sentence);
    }
    
    return 0;
}