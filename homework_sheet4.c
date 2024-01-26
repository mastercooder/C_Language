# include<stdio.h>
# include<math.h>

int sumofDigit(int number);
int square(int n);
char* hotorcold(int n);
int powfunction(int n);

int main(){
    int query;
    printf("Enter the question number you want to see: ");
    scanf("%d", &query);

    switch (query)
    {
    case 1:{
        printf(" \n");
        printf("  Question 1: Write a function to calculate the sum of digits of a number ?\n");
        printf("-------------------------------------------------------------------------------\n");
        printf(" \n");
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);

        printf(" \n");
        printf("-------------------------------------\n");
        printf("Your answer is : %d\n", sumofDigit(n));
        printf("-------------------------------------\n");
        printf(" \n");
        break;
    }

    case 2:{
        printf(" \n");
        printf("  Question 2: Write a function to calculate the square root of a number\n ?");
        printf("-------------------------------------------------------------------------\n");
        int n;
        printf(" \n");
        printf("Enter the number which square root you want to print: ");
        scanf("%d", &n);

        printf(" \n");
        printf("-------------------------------------\n");
        printf("The square root of %d is : %d\n", n, square(n));
        printf("-------------------------------------\n");
        printf(" \n");
        break;
    }

    case 3:{
        printf(" \n");
        printf("  Question 3: Write a function to calculate Hot or cold depending on the temperature user enters ?\n");
        printf("----------------------------------------------------------------------------------------------------\n");
        int n;
        printf(" \n");
        printf("Enter the temperature: ");
        scanf("%d", &n);

        printf(" \n");
        printf("-------------------------------------\n");
        printf(" %s\n", hotorcold(n));
        printf("-------------------------------------\n");
        printf(" \n");
        break;
    }

    case 4:{
        printf(" \n");
        printf("  Question 3: Make your own POW function ?\n");
        printf("--------------------------------------------\n");
        int n;
        printf(" \n");
        printf("Enter the number: ");
        scanf("%d", &n);

        printf(" \n");
        printf("-------------------------------------\n");
        printf(" %d\n", powfunction(n));
        printf("-------------------------------------\n");
        printf(" \n");
        break;
    }
    
    default:
        printf("Enter a valid number.");
        break;
    }
}

int sumofDigit(int n){
    int sum = 0;

    while (n>0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }

    return sum;
}
int square(int n){
    return pow(n,2);
}

char* hotorcold(int n){
    static char hot[] = "Hot";
    static char cold[] = "Cold";

    if (n<=20){
        return cold;
    } else{
        return hot;
    }
}

int powfunction(int n){
    return pow(n, 2);
}