# include<stdio.h>

int main(){
    int query;

    printf("Enter the question number: ");
    scanf("%d", &query);
    getchar();

    if (query==1){
        char ch;

        printf("Enter the character: \n");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z'){
            printf("Upper case");
        } 
        else if (ch >= 'a' && ch <= 'z'){
            printf("Lower Case");
        } else {
            printf("It is not an enlgish alphabet");
        }
    }   else {
        printf("Something went wrong");
    }
}