# include<stdio.h>

void name(char arr[]);
int countname(char arr[]);

int main(){
    while (1){
        char user_input[20];

        printf("Enter your name: ");
        fgets(user_input, 20, stdin);

        if (user_input=="exit"){
            printf("Exiting the loop");
            break;
        }
        
        printf("Your name is ");
        name(user_input);
        
        printf("\n");

        printf("Your name length is: %d\n", countname(user_input));
    }
}


void name(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int countname(char arr[]){
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }

    return count-1;
}