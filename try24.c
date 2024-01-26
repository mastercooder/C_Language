# include<stdio.h>
# include<string.h>

struct Student{
    char name[20];
    int roll_number;
    float cgpa;
};

int main(){
    struct Student IT[100];
    strcpy(IT[0].name, "Tejesh");
    IT[0].roll_number = 55;
    IT[0].cgpa = 98.9;

    printf("Name of the student: %s\n", IT[0].name);
    printf("Roll number of the student: %d\n", IT[0].roll_number);
    printf("CGPA of the student: %f\n", IT[0].cgpa);

    return 0;
    
}
