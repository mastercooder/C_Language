#include <stdio.h>
#include <math.h>


void questions();
void formula();
int fact(int n);
float convertTemp(float user_input);
float marks(float maths, float science, float sanskrit);
// int fib(int user_input);

int main() {
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);


    switch (query) {
        case 1: {
            printf("Question 1: Write a library function to calculate the square or cube of a given number.\n");
            printf("-------------------------------------------------------------------------------------\n");
            int n;
            printf("Enter the number: ");
            scanf("%d", &n);

            char soc;
            printf("Enter s for square or c for cube: ");
            scanf(" %c", &soc);

            if (soc == 's') {
                n = pow(n, 2);
            } else {
                n = pow(n, 3);
            }

            printf("-------------------------------------\n");
            printf("The result is: %d\n", n);
            printf("-------------------------------------\n");
            break;
        }



        case 2: {
            printf("Question 2: Write a function to calculate the area of a square, a circle, and a rectangle.\n");
            printf("-------------------------------------------------------------------------------------\n");
            formula();
            break;
        }


        case 3: {
            printf("Question 3: Factorial of N\n");
            int user_input;
            printf("Enter the number for which you want to calculate the factorial: ");
            scanf("%d", &user_input);
            printf("---------------------------\n");
            printf("The factorial is: %d\n", fact(user_input));
            printf("---------------------------\n");
            break;
        }


        case 4: {
            printf("Question 4: Write a function to convert Celsius to Fahrenheit.\n");
            float user_input;
            printf("Enter the amount of Celsius: ");
            scanf("%f", &user_input);
            printf("---------------------------\n");
            printf("The Fahrenheit temperature is: %.2f\n", convertTemp(user_input));
            printf("---------------------------\n");
            break;
        }


        case 5: {
            printf("Question 5: Write a function to calculate the percentage of a student in three subjects: Maths, Science, and Sanskrit.\n");
            float maths, science, sanskrit;

            printf("Enter your Maths marks: ");
            scanf("%f", &maths);

            printf("Enter your Science marks: ");
            scanf("%f", &science);

            printf("Enter your Sanskrit marks: ");
            scanf("%f", &sanskrit);

            printf("---------------------------\n");
            printf("Your percentage is: %.2f%%\n", marks(maths, science, sanskrit));
            printf("---------------------------\n");
            break;
        }

        // case 6: {
        //     printf(" \n");
        //     printf("Question 6: Write a function to print fabonacci sequence ?");
        //     printf(" \n");

        //     int user_input,n;
        //     printf("Enter the feonacci number to print the sequence: ");
        //     scanf("%d", &user_input);

        //     printf("---------------------------\n");
            
        //     printf("---------------------------\n");
        //     break;
        // }


        default:
            printf("Invalid question number.\n");
    }

    return 0;
}

void formula() {
    char user_input;
    printf("Enter s for square, c for circle, or r for rectangle: ");
    scanf(" %c", &user_input);

    switch (user_input) {
        case 's': {
            float side;
            printf("Enter the length of the side: ");
            scanf("%f", &side);
            printf("The area of the square is: %.2f\n", side * side);
            break;
        }

        case 'c': {
            float radius;
            printf("Enter the radius: ");
            scanf("%f", &radius);
            printf("The area of the circle is: %.2f\n", 3.14159 * radius * radius);
            break;
        }

        case 'r': {
            float length, width;
            printf("Enter the length: ");
            scanf("%f", &length);
            printf("Enter the width: ");
            scanf("%f", &width);
            printf("The area of the rectangle is: %.2f\n", length * width);
            break;
        }

        default:
            printf("Invalid input.\n");
    }
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

float convertTemp(float user_input) {
    float fahrenheit = user_input * (9.0 / 5.0) + 32;
    return fahrenheit;
}

float marks(float maths, float science, float sanskrit) {
    return ((maths + science + sanskrit) / 3);
}

// int fib(int user_input){
    
//     if (user_input == 0){
//         return 0;
//     }
//     else if (user_input == 1){
//         return 1;
//     }


//     int fibnm1 = feb(user_input-1);
//     int fibnm2 = feb(user_input-3);
//     int fibN = fibnm1 + fibnm2;
//     printf("The fibunachi of %d is : %d\n", user_input, fibN);
// }