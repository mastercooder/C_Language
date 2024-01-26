# include<stdio.h>

void max(int *a, int *b);
void alphabat(int *i);

int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            printf(" \n");
            printf("  Question 1) Write a program to find the maximum number between two number using pointers ?");
            printf(" \n");

            int a, b;
            printf("Enter the first number: ");
            scanf("%d", &a);

            printf("Enter the second number: ");
            scanf("%d", &b);

            printf("\n");
            printf("--------\n");
            max(&a, &b);
            printf("--------\n");
            printf("\n");
            break;
        }

        case 3:{
            printf(" \n");
            printf("  Question 3) Write a program to print all the alphabets of english letter using pinters ?");
            printf(" \n");
            int i;

            printf("\n");
            printf("----------------------------------");
            alphabat(&i);
            printf("----------------------------------");
            printf("\n");
            break;
        }
        default:
            printf("Something went wrong");
            break;
    }
    return 0;
}

void max(int *a, int *b){
    if (a>b){
        printf("A is bigger");
    } 
    else if (a<b){
        printf("B is bigger");
    } else {
        printf("Something went wrong");
    }
}

void alphabat(int *i){
    for (int i = 'A'; i <= 'Z'; i++){
        printf("%c\n", i);
    }
}