# include<stdio.h>

void namaste();
void bonjong();

int main(){
    char user;

    printf("Enter i for indian and f for bongong: \n");
    scanf("%c", &user);

    if (user=='i'){
        namaste();
    } else{
        bonjong();
    }
}

void namaste(){
    printf("Namaste");
}

void bonjong(){
    printf("Bongjong");
}