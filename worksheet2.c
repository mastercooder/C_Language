# include<stdio.h>

void swap(int *a, int *b);
void printaddress (int n);
void doWork(int a, int b, int *sum, int *pro, int *avg);

int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

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
            printf("  Question 2) Print the value of 'i' from its printer to pointer ?\n");
            printf("--------------------------------------------------------------------\n");
            printf(" \n");

            int i = 5;
            int *ptr = &i;
            int **pptr = &ptr;

            printf(" \n");
            printf("------------------------------------------------------------\n");
            printf("The value of i from its printer to print is: %d\n", **pptr);
            printf("------------------------------------------------------------\n");
            printf(" \n");
            break;
        }

        case 3:{
            printf(" \n");
            printf("  Question 2) Swap two numbers a and b ?\n");
            printf("--------------------------------------------\n");
            printf(" \n");

            int a,b;
            printf("Enter the first number: \n");
            scanf("%d", &a);

            printf("Enter the second number: \n");
            scanf("%d", &b);

            printf(" \n");
            printf("----------------------------\n");
            swap(&a, &b);
            printf("A = %d and B = %d\n",a, b);
            printf("----------------------------\n");
            printf(" \n");
            break;  
        }

        case 4:{
            int n = 4;
            
            printf("%p\n", &n);
            printaddress(n);
            break;
        }

        case 5:{
            printf(" \n");
            printf("  Question 2) Write a function to calculate SUM, PRODUCT, AVERATE of two numbers. Print them in main function ?\n");
            printf("-----------------------------------------------------------------------------------------------------------------\n");
            printf(" \n");

            int a, b;
            int sum, pro, avg;

            printf("Enter the first number: ");
            scanf("%d", &a);
            
            printf("Enter the second number: ");
            scanf("%d", &b);

            printf(" \n");
            printf("------------------------------------------\n");
            doWork(a, b, &sum, &pro, &avg);
            printf("SUM = %d , PRODUCT = %d AND AVERAGE = %d\n", sum, pro, avg);
            printf("-------------------------------------------\n");
            printf(" \n");
            break; 
        }

        default:
            printf("Enter a valid question number");
            break;
        
    }
}


void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printaddress (int n){
    printf(" %p\n", &n);
}

void doWork(int a, int b, int *sum, int *pro, int *avg){
    *sum = a+b;
    *pro = a*b;
    *avg = (a+b)/2;
}