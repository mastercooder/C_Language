# include<stdio.h>

int main(){
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
    
}