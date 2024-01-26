# include<stdio.h>

void salting(char password[]);
void slince(char str[], int n, int m);
int vovel(char str[]);
void check(char str[], char ch);

int main(){
    int query;

    printf("Enter the question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            printf("\n");
            printf("  Question 1) Take a String input from a user as %c ?\n");
            printf("--------------------------------------------------------");
            printf("\n");
            
            char str[100];
            char user_input;
            int i = 0;

            while (user_input!='\n'){
                scanf("%c", &user_input);

                str[i] = user_input;
                i++;

            }
            str[i] = '\0';
            puts(str);
    
            break;
        }

        case 2:{
            printf("\n");
            printf("  Question 2) Find the salting from the password entered by user if the salt is '123', and enter at the last ?\n");
            printf("----------------------------------------------------------------------------------------------------------------");
            printf("\n");

            char password[100];
            printf("Enter the passwoard: ");
            scanf("%s", password);

            printf("\n");
            printf("----------------------------------\n");
            salting(password);
            printf("----------------------------------\n");
            printf("\n");
            break;
        }

        case 3:{
            printf("\n");
            printf("  Question 3) Write a function named silece which takes a string & retrun a slicked string from index n to m ?\n");
            printf("----------------------------------------------------------------------------------------------------------------");
            printf("\n");

            char str[100] = "HelloWorld";
            slince(str, 3, 6);
            break;
        }

        case 4:{
            printf("\n");
            printf("  Question 4) Write a function to count occarance of volve in a string ?\n");
            printf("---------------------------------------------------------------------------");
            printf("\n");

            char str[100] = "HelloWorld";

            printf("\n");
            printf("------------------------------------------\n");
            printf("The number of time vovel occur is: %d\n", vovel(str));
            printf("------------------------------------------\n");
            printf("\n");
            break;
        }

        case 5:{
            printf("\n");
            printf("  Question 5) Check if a given character is present in a sting or not ?\n");
            printf("-------------------------------------------------------------------------");
            printf("\n");

            char str[100] = "HelloWorld";
            char ch = 'l';
            
            printf("\n");
            printf("------------------------------------------\n");
            check(str, ch);
            printf("------------------------------------------\n");
            printf("\n");
            break;
        }

        default:
            printf("Something went wrong.\n");
            break;
    }
    return 0;
}

void salting(char password[]){
    int salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);

    printf("The New Passowrd is %s\n", newPass);
}

void slince(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for (int i=n, j=0; i<=m; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

int vovel(char str[]){
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
        }
    }

    return count;
}

void check(char str[], char ch){
    for (int i=0; str[i] != '\0'; i++){
        if (str[i]==ch){
            printf("Yes it is present the character");
            return;
        }
    }
    printf("The character is not prisent");
}