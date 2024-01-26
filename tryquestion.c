# include<stdio.h>
# include<math.h>

int main(){
    printf(" \n");
    /*
    printf("Write a promgram to check if a number is devisible by 2 or not? \n");
    printf(" \n");
    int number;
    number = printf("Enter the number: \n");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf(" \n");
        printf("It is a even number \n");
        printf(" \n");
    }
    else{
        printf(" \n");
        printf("It is not a even number \n");
        printf(" \n");
    }
    return 0;

    int is_sunday = 1; 
    int is_snowing = 1;    
    printf("%d", is_sunday && is_snowing);
    return 0;

    int is_monday = 0; 
    int is_raining = 1;    
    printf("%d", is_monday || is_raining);
    return 0;
    */
    while (1)
    {
        int number;
        printf("Enter number: ");
        scanf("%d", &number);
        printf("%d", number>9 && number<100);
            /* code */
    }
    return 0;
}