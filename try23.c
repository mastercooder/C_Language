# include<stdio.h>
# include<string.h>

void string(char arr[]);
void check(char str[], char ch);

int main(){
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
}

void string(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}

void check(char str[], char ch){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i]==ch){
            printf("The character is present in the word\n");
            return;
        }
    }
    printf("The character is not present in the word\n");
}