# include<stdio.h>
# include<math.h>

int main(){
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
        printf("The number is an Armstrong number");
    } else {
        printf("The number is not an Armstrong number");
        
    }
}