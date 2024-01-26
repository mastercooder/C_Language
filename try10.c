# include<stdio.h>

int main(){
    char user_input;
    printf("What you want to see area of a square = s, circle = c & rectangle = r:  ");
    scanf(" %c", &user_input);
    printf(" \n");

    if (user_input=='s'){
        printf(" \n");
        printf("Area of Square = Side X Side: \n");
        printf(" \n");
        float site;
        printf("Enter the number: ");
        scanf("%f", &site);
        printf(" \n");
        printf("The are of squre is: %f", site*site);
    }

    else if(user_input=='c'){
        printf(" \n");
        printf("Area of Circle = π * Radius * Radius \n");
        printf(" \n");
        float radius;
        printf("Enter length : ");
        scanf(" %f", &radius);
        printf(" \n");
        printf("The are of squre is: %f", 3.14159 * radius * radius);
    }
    else if(user_input=='r'){
        printf(" \n");
        printf("Area of Rectangle = Lenght X Breath \n");
        printf(" \n");
        float length, breath;
        printf("Enter length : ");
        scanf("%f", &length);
        printf("Enter Breath : ");
        scanf("%f", &breath);
        printf(" \n");
        printf("The are of squre is: %f", length*breath);
    } else {
        printf("Enter s,c or r.");
    }
}