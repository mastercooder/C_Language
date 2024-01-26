# include<stdio.h>

int main(){
    int query;

    printf("Enter the number of question: \n");
    scanf("%d", &query);
    getchar();

    if (query==1){
        printf(" \n");
        printf("Write a Program to give grades to a student\n");
        printf("marks<30 is C\n");
        printf("30 <= marks <70 is B\n");
        printf("70 <= marks <90 is A\n");
        printf("90 <= marks <100 is A+\n");
        printf(" \n");

        int marks;
        printf("Enter your marks: (1-100)\n");
        scanf("%d", &marks);

        if (marks>0 && marks<=30){
            printf("Grade C");
        }
        else if(marks > 30 && marks <= 70){
            printf("Grade B");
        }
        
        else if(marks > 70 && marks <= 90){
            printf("Grade A");
        }
        
        else if(marks > 90 && marks <= 100){
            printf("Grade A+");
        }
        else{
            printf("Your have entered wrong number");
        }
    }

    else if (query==2){
        int x = 2;

        if (x==1){
            printf("X is equal to 1");
        } else {
            printf("X is equal not to 1");
        }
    }

    else if (query==3){
        char ch;

        printf("Enter the character: \n");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z'){
            printf("Upper case");
        } 
        else if (ch >= 'a' && ch <= 'z'){
            printf("Lower Case");
        } else {
            printf("It is not an enlgish alphabet");
        }
    }

    else if (query==4){
        int number, orignal_number, reminder, sum = 0, n = 0;

        printf("Enter the integer: ");
        scanf("%d", &number);

        orignal_number = number;

        while (orignal_number!=0){
            orignal_number/=10;
            ++n;
        }

        orignal_number = number;

        while (orignal_number!=0){
            reminder = orignal_number % 10;
            sum += reminder * reminder * reminder;
            orignal_number /= 10;
        }
        if (sum==number){
            printf("-----------------------------------\n");
            printf(" The number is an Armstrong number\n");
            printf("-----------------------------------\n");
        } else {
            printf("----------------------------------------\n");
            printf(" The number is not an Armstrong number\n");
            printf("----------------------------------------\n");
            
        }
    }

    else if (query==5){
        int number;

        printf("Enter you number: ");
        scanf("%d", &number);

        if (number >=1){
            printf("It is a natural number ");
        } else {
            printf("It is a not a natural number ");
        }
    }
    
    return 0;
}
