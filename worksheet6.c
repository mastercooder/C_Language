# include<stdio.h>
# include<string.h>

struct Student{
    char name[100];
    int roll_no;
    float cgpa;
};

struct vector{
    int x;
    int y;
};

struct complex{
    int real;
    int imagenery;
};

typedef struct ccount{
    char Name[100];
    int AccountNO;
} acc ;

void ClacSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    int query;
    printf("Enter the question number: ");
    scanf("%d", &query);

    switch (query){
        case 1:{

            printf("\n");
            printf("  Quetsion 1) Enter the data of three different student with struct ?\n");
            printf("-----------------------------------------------------------------------\n");
            printf("\n");

            struct Student s1;
            strcpy(s1.name, "Tejesh");
            s1.roll_no = 3255;
            s1.cgpa = 86.5;

            printf("\n");
            printf("----------------------------------\n");
            printf("Name of the student: %s\n", s1.name);
            printf("Roll NO of the student: %d\n", s1.roll_no);
            printf("CGPA of the student: %f\n", s1.cgpa);
            printf("----------------------------------\n");
            printf("\n");


            struct Student s2;
            strcpy(s2.name, "Rakesh");
            s2.roll_no = 9786;
            s2.cgpa = 68.7;

            printf("\n");
            printf("----------------------------------\n");
            printf("Name of the student: %s\n", s2.name);
            printf("Roll NO of the student: %d\n", s2.roll_no);
            printf("CGPA of the student: %f\n", s2.cgpa);
            printf("----------------------------------\n");
            printf("\n");


            struct Student s3;
            strcpy(s3.name, "Jayesh");
            s3.roll_no = 7896;
            s3.cgpa = 98.9;

            printf("\n");
            printf("----------------------------------\n");
            printf("Name of the student: %s\n", s3.name);
            printf("Roll NO of the student: %d\n", s3.roll_no);
            printf("CGPA of the student: %f\n", s3.cgpa);
            printf("----------------------------------\n");
            printf("\n");   
            break;
        }

        case 2:{
            printf("\n");
            printf(" Question 2) Enter the address of 5 people using structure ?\n");
            printf("-------------------------------------------------------");
            printf("\n");
            break;
        }

        case 3:{
            printf("\n");
            printf(" Question 3) Create a structure to store vectors. Then make a function to return the sum of two Vectors ?\n");
            printf("---------------------------------------------------------------------------------------------------------");
            printf("\n");

            struct vector v1 = {5, 10};
            struct vector v2 = {3, 7};
            struct vector sum = {0};

            ClacSum(v1, v2, sum);

            break;
        }

        case 4:{
            printf("\n");
            printf(" Question 4) Create a structure to store complex number (using arrow oprator) ?\n");
            printf("---------------------------------------------------------------------------------- \n");
            printf("\n");

            struct complex number1 = {5, 8};
            struct complex *ptr = &number1;

            printf("\n");
            printf("Real number: %d\n", ptr->real);
            printf("Imagenery number: %d\n", ptr->imagenery);
            printf("\n");

            break;
        }

        case 5:{
            printf("\n");
            printf(" Question 5) You have to store the marks of 30 Students in Class What wil you use ? \n");
            printf(" a) Use 30 float \n");
            printf(" b) Use Structure \n");
            printf("\n");

            printf("Ansywer: a) Use 30 float \n");
            break;
        }

        case 6:{
            printf("\n");
            printf(" Question 6) Make a Structure to store Bank Account of a user ABC Bank. Also make an alince for it? ");
            printf("-----------------------------------------------------------------------------------------------------");
            printf("\n");

            acc acc1 = {"Tejesh", 2345242};
            acc acc2 = {"Jayesh", 3453454};
            acc acc3 = {"Parkhit", 23423423};

            printf("Name - %s   Account NO: %d \n", acc1.Name, acc1.AccountNO);
            printf("Name - %s   Account NO: %d \n", acc2.Name, acc2.AccountNO);
            printf("Name - %s   Account NO: %d \n", acc3.Name, acc3.AccountNO);
        
            break;
        }
        
        default:
            printf("Someting went wrong");
            break;
    }

    return 0;
}

void ClacSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v2.x + v2.x;
    sum.y = v2.y + v2.y;

    printf("\n");
    printf("-------------------\n");
    printf(" Sum of X is : %d\n", sum.x);
    printf(" Sum of Y is : %d\n", sum.y);
    printf("-------------------\n");
    printf("\n");

}