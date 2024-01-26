# include<stdio.h>
# include<string.h>

int main(){
    printf("\n");

    struct addrresofpeople{
    int house_no;
    int block;
    char name[50];
    char city[50];
    char State[50];
};

    struct addrresofpeople add[5];

    printf("Enter the details of 5 people :-\n");
    printf("\n");

    for (int i=0; i<5; i++){
        printf("Person %d \n", i+1);
        printf("House NO: ");
        scanf("%d", add[i].house_no);
        printf("Block No: ");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
        scanf("%d", add[i].block);
        printf("Enter your name: ");
        scanf(" %c", add[i].name);
        printf("City Name: ");
        scanf(" %c", add[i].city);
        printf("State Name: ");
        scanf(" %c", add[i].State);
    }

    int query;
        printf("Enter whose Record you want to see Person 1, 2, 3, 4, 5:  ");
        scanf("%d", &query);

        if (query==1){
            printf("The name of the Person: %c\n", add->name);
        }
}