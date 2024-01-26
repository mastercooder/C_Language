# include<stdio.h>

int main(){
    int query;
    printf(" \n");
    printf("Enter the question number: ");
    scanf("%d", &query);


    if (query==1){
        printf(" \n");
        printf("Print the sum of first five natural number. ");
        printf(" \n");

        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        int sum = 0;
        for (int i = 1, j = n; i<=n && j>=1; i++, j--){
            sum = sum+i;
            printf("%d\n", j);
        }
        printf("The sum of first five natural number: %d\n", sum);
    }

    else if(query==2){
        printf(" \n");
        int n;
        printf("Enter the number which table you want to print: ");
        scanf("%d", &n);

        for (int i = 1; i<=10; i++){
            printf("%d\n", n*i);
        }
        printf("The code is ended");
    }

    else if(query==3){
        printf(" \n");
        int n;

        do{
            printf("Enter the number: ");
            scanf("%d", &n);

            if (n%7==0){
                break;
            }
        }while (1);
    }

    else if(query==4){
        printf(" \n");
        printf("Print All the number 1 to 10 except 6 ?");
        printf(" \n");
        for (int i = 1; i<=10; i++){
            if (i==6){
                continue;
            }
            printf("%d\n", i);
        }
    }

    else if(query==5){
        printf(" \n");
        printf("Print all the odd number from 5 to 50 ?");
        printf(" \n");
        for (int i = 5; i<=50; i = i+2){
            printf("%d\n", i);
        }
    }

    if (query==6){
        printf(" \n");
        printf("Print the factorial of a number n ?");
        printf(" \n");
        int n,fac = 1;
        printf("Enter the number to find the factorial: ");
        scanf("%d", &n);

        for (int i = 1; i<=n; i++){
            fac = fac*i;
        }
        printf("%d", fac);
    }

    else if(query==7){
        printf(" \n");
        int n;
        printf("Print the reverse of a table n: ");
        scanf("%d", &n);

        for (int i = 10; i>=1; i--){
            printf("%d\n", n*i);
        }
    }

    else if(query==8){
        printf(" \n");
        printf("Calculate the sum of all teh numbers for 5 to 50 ?");
        printf(" \n");

        int sum = 0;
        for(int i = 5; i<=50; i++){
            sum+=i;
        }
        printf("%d", sum);
    }
    else if(query==9){
        printf(" \n");
        int n;
        printf("Enter your number: ");
        scanf("%d\n", &n);
        printf(" \n");

        for (int i = 2; i<=10; i++){
            if (n%i==0 || n%n==0){
                printf("It is not a prime number");
            }
            else{
                printf("It is a prime number");
            }
        }
    }
    return 0;
}