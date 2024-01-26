# include<stdio.h>

int main(){
     printf("\n");
     int query;
     printf("Enter the question you want to access: \n");
     scanf("%d", &query);

     switch (query){
        case 1:{
            printf("\n");
            printf(" Question 1) Make a program to read 5 Integers from a file ?\n");
            printf("--------------------------------------------------------------");
            printf("\n");

            FILE *fptr;
            fptr = fopen("worksheet7_1.txt", "r");

            if (fptr == NULL){
                printf("Something wrong with your text file \n");
                return 1;
            }

            int n;
            int count;

            while (fscanf(fptr, "%d", &n) == 1){
                printf("\n");
                printf(" %d", n);
                printf("\n");
                count++;

                if (count==5){
                    break;
                }
            }

            fclose(fptr);
            break;
        }

        case 2:{
            printf("\n");
            printf(" Question 2) Make a program to input Student information from a user & enter it to a file ?\n");
            printf("------------------------------------------------------------------------------------------------");
            printf("\n");

            FILE *fptr;
            fptr = fopen("worksheet7_2.txt", "w");

            if (fptr == NULL){
                printf("Something wrong with your text file. \n");
                return 1;
            }

            char name[100];
            int age;
            float cgpa;

            printf("\n");
            printf("Enter your Name: \n");
            scanf(" %s", name);
            printf("Enter your Age: \n");
            scanf("%d", &age);
            printf("Enter your CGPA: \n");
            scanf("%f", &cgpa);

            fprintf(fptr, "Student Name: %s\n", name);
            fprintf(fptr, "Student Age: %d\n", age);
            fprintf(fptr, "Student CGPA: %f\n", cgpa);
            fclose(fptr);
            break;
        }

        case 3:{
            printf("\n");
            printf(" Question 3) Make a program to write all the odd number from 1 to n in the file ?\n");
            printf("-------------------------------------------------------------------------------------");
            printf("\n");

            FILE *fptr;
            fptr = fopen("worksheet7_3.txt", "w");

            if (fptr == NULL){
                printf("Something wrong with with txt file. \n");
                return 1;
            }

            int n;
            printf("Enter a numebr to print odd numbers: \n");
            scanf("%d", &n);

            for(int i=1; i<=n; i++){
                if (i%2 != 0){
                    fprintf(fptr, "%d\n", i);
                }
            }
            fclose(fptr);
            break;
        }

        case 4:{
            printf("\n");
            printf(" Question 4) 2 Numbers - a & b are written in a file write a progarm to replace them with there sum ?\n");
            printf("------------------------------------------------------------------------------------------------------");
            printf("\n");

            FILE *fptr;
            fptr = fopen("worksheet7_4.txt", "r");

            int a, b;
            fscanf(fptr, "%d", &a);
            fscanf(fptr, "%d", &b);
            fclose(fptr);

            fptr = fopen("worksheet7_4.txt", "w");
            fprintf(fptr, "%d", a+b);
            fclose(fptr);

            break;
        }
     
        default:
            printf("Something went wrong");
            break;
        }

    return 0;
}