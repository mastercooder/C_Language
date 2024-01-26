# include<stdio.h>
# include<string.h>

typedef struct Bachlers_Of_Computer_Application{
    char name[20];
    int rollNo;
    float cgpa;
} bca;

int main(){
    printf("\n");
    printf(" The detailes of strudnts are as follows :- \n");
    printf("-------------------------------------------\n");
    printf("\n");

    bca s1 = {"Tejesh", 4645, 9.4};
    bca *ptr = &s1;

    printf("Normal:-  %s\n", s1.name);
    printf("Using PTR %s\n", ptr->name);
    
    printf("\n");
    printf("\n");
}
