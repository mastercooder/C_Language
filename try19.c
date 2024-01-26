# include<stdio.h>

int main(){
    int query;
    printf("Enter your question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            printf("\n");
            printf("  Question 2) Make a program to enter user name and print the length of it ?\n");
            printf("-----------------------------------------------------------------------------\n");
            printf("\n");

            char name[20];
            printf("Enter your name: ");
            fgets(name, 20, stdin);
            puts(name);
            break;
        }
        default:
            break;
    }
}