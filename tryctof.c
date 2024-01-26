# include<stdio.h>

float convertTemp(float user_input);

int main(){
    printf("Question 3: Write a function to convery celcius to faranhite ?");
    printf(" \n");
    float user_input;
    printf("Enter the amount of Celcious: ");
    scanf("%f", &user_input);
    printf(" \n");
    printf("---------------------------\n");
    printf("The celcious is : %f\n", convertTemp(user_input));
    printf("---------------------------\n");
    printf(" \n");
}

float convertTemp(float user_input){
    float temp = (user_input * 9/5) + 32;
    return temp;
}