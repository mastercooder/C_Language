// Program to Calculate GST (18%)

# include<stdio.h>
void calculateGST(int value);

int main(){
    int value;
    printf("Enter the prise of the product: ");
    scanf("%d", &value);
    calculateGST(value);
    return 0;
}

void calculateGST(int value){
    int tax = value*18/100;
    printf(" \n");
    printf("Your product prise  :    %d\n", value);
    printf("GST 18%             :    %d\n", tax);
    printf("The Final prise is  :    %d\n", value+tax);
    printf(" \n");
}