// Certificate In C Code

#include<stdio.h>
#include<conio.h>

void main(){
    int query;
    printf("1: Enter the value of A\n");
    printf("2: Opearator In C\n");
    while (1)
    {
        printf("Enter the number you wan to acces: \n");
        scanf("%d", &query);
        printf("\n");
        
        switch (query)
        {
            case 1:
            {
                int a;
                printf("Enter the value of A: ");
                scanf("%d", &a);
                
                printf("\n");
                printf("The value of a is %d", a);
                getch();
                break;
            }

            case 2:
            {
                int x,y;
                x = 30;
                y = 30;
                printf("The Addition of x and y is: %d", x+y);
                break;
            }

            default:
                printf("Something went worng!\n");
                break;
        }
    }
}