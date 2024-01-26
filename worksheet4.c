# include<stdio.h>

void storeName(char arr[]);
int count(char arr[]);

int main(){
    int query;
    while (1){   
        printf("Enter the question number (type to exit for exit): ");
        scanf("%d", &query);

        switch (query){
            case 1: {
                printf("\n");
                printf("  Question 1) Create a string firstName and lastName to store details of user and print all the characters using loop ?\n");
                printf("-------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n");

                char firstName[100];
                char lastName[100];

                printf("Enter your first name: ");
                scanf("%s", &firstName);

                printf("Enter your sir name: ");
                scanf("%s", &lastName);

                printf("\n");
                printf("--------------------\n");
                storeName(firstName);
                storeName(lastName);
                printf("--------------------\n");
                printf("\n");
                break;
            }

            case 2: {
                printf("\n");
                printf("  Question 2) Ask the user to enter his full name and print it back to them ?\n");
                printf("-------------------------------------------------------------------------------\n");
                printf("\n");

                char firstName[20], lastName[20];
                printf("Enter your first name : ");
                scanf("%s", firstName);

                printf("Enter your last name: ");
                scanf("%s", lastName);

                printf("\n");
                printf("--------------------------\n");
                printf("You name is %s %s\n", firstName, lastName);
                printf("--------------------------\n");
                printf("\n");
                break;
            }

            case 3: {
                printf("\n");
                printf("  Question 2) Make a program to enter user name and print the length of it ?\n");
                printf("-----------------------------------------------------------------------------\n");
                printf("\n");

                char name[20];
                printf("Enter your name: ");
                scanf("%s", &name);

                printf("\n");
                printf("--------------------------\n");
                printf("Your name length is %d\n", count(name));
                printf("--------------------------\n");
                printf("\n");
                break;
            }
            
            default:
                printf("Something went wrong");
                break;
            }
    }
        return 0;
}

void storeName(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int count(char arr[]){
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}