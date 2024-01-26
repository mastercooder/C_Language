# include<stdio.h>
# include<string.h>

int main(){
    int query;

    printf("Enter the question number: ");
    scanf("%d", &query);
    switch (query){
        case 1:{
            char name[20];
            printf("Enter Your Name: ");
            scanf("%s", &name);

            int length = strlen(name);

            printf("The lenght is: %d", length);
            break;
        }

        case 2:{
            printf(" \n");
            char newString[20], oldString[20];

            printf("Enter the value of old String: ");
            scanf("%s", oldString);

            printf("Enter the value of new string: ");
            scanf("%s", newString);

            strcpy(oldString, newString);

            printf("--------------------------------------\n");
            printf("The value of new string is %s\n", newString);
            printf("--------------------------------------\n");
            break;
        }

        case 3:{
            printf(" \n");
            char newString[20], oldString[20];

            printf("Enter the value of first sting: ");
            scanf("%s", oldString);

            printf("Enter the value of second string: ");
            scanf("%s", newString);

            strcat(oldString, newString);

            printf("--------------------------------------\n");
            printf("The value of new string is %s\n", oldString);
            printf("--------------------------------------\n");
            break;
        }
        
        case 4:{
            printf("\n");

            char user_input1[100], user_input2[100];

            printf("Enter the first world: ");
            scanf("%s", user_input1);

            printf("Enter the second value: ");
            scanf("%s", user_input2);

            int word = strcmp(user_input1, user_input2);

            if (word==1){
                printf("It is a positing value.");
            }
            else if(word==0){
                printf("The value is same");
            } else{
                printf("It is a negative value. ");
            }
            break;  
        }
        default:
            printf("Something went wrong");
            break;
        }
    return 0;
}