# include<stdio.h>

void swap(int *a, int *b);

int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    getchar();
    switch (query){
        case 1:{
            int x;
            int *ptr;

            ptr = &x;
            *ptr = 0;

            printf(" \n");
            printf("-----------------------------------\n");

            printf(" \n");
            printf("x = %d\n", x);
            printf("*ptr = %d\n", *ptr);
            printf(" \n");

            printf("-----------------------------------\n");

            printf(" \n");
            ptr += 5;
            printf("x = %d\n", x);
            printf("*ptr = %d\n", *ptr);
            printf(" \n");

            printf("-----------------------------------\n");

            printf(" \n");
            (*ptr)++;
            printf("x = %d\n", x);
            printf("*ptr = %d\n", *ptr);
            printf(" \n");

            printf("-----------------------------------\n");
            printf(" \n");
            break;
        }

        case 2:{
            printf(" \n");
            printf("  Question 2) Print the value of i for pointer to pinter ?\n");
            printf(" \n");
            int i =5;
            int *ptr = &i;
            int **pptr = &ptr;

            printf("\n");
            printf("-------------------------------------\n");
            printf("The value of i is %d", **pptr);
            break;
        }

        case 3:{
            printf(" \n");
            printf("  Question 2) Swap two numbers a & b ?\n");
            printf("-----------------------------------------\n");
            printf(" \n");
            int a, b;
            printf("Enter the first number: \n");
            scanf("%d", &a);

            printf("Enter the second number: \n");
            scanf("%d", &b);
            

            printf("\n");
            printf("-------------------------------------\n");
            swap(&a, &b);
            printf("The number are");
            printf("The first number is now: %d", a);
            printf("The second number is now: %d", b);
            printf("-------------------------------------\n");
            printf("\n");
            break;
        }

        default:{
            printf("Enter a valid question number");
            break;
        }
    }
}

void swap(int *a, int *b){
    int t = *a;
    int *b = *a;
    int *b = t;
}