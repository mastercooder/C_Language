# include<stdio.h>
# include<string.h>

int main(){
    printf("\n");

    int query;
    printf("Enter the number of part you want to execute: ");
    scanf("%d", &query);

    switch (query){
        case 1:{
            FILE *fptr;
            fptr = fopen("try27.txt", "r");
            
            char ch;
            fscanf(fptr, " %c", &ch);
            printf("Character = %c\n", ch);
            fscanf(fptr, " %c", &ch);
            printf("Character = %c\n", ch);
            fscanf(fptr, " %c", &ch);
            printf("Character = %c\n", ch);
            fscanf(fptr, " %c", &ch);
            printf("Character = %c\n", ch);
            
            fclose(fptr);
            break;
        }

        case 2:{
            FILE *fptr;
            fptr = fopen("tryint27.txt", "r");
            
            int ch;
            fscanf(fptr, " %d", &ch);
            printf("Character = %d\n", ch);
            fscanf(fptr, " %d", &ch);
            printf("Character = %d\n", ch);
            fscanf(fptr, " %d", &ch);
            printf("Character = %d\n", ch);
            fscanf(fptr, " %d", &ch);
            printf("Character = %d\n", ch);

            fclose(fptr);
            break;
        }

        case 3:{
            FILE *fptr;
            fptr = fopen("try27.txt", "a");

            fprintf(fptr, " %c", 'M');
            fprintf(fptr, " %c", 'A');
            fprintf(fptr, " %c", 'N');
            fprintf(fptr, " %c", 'G');
            fprintf(fptr, " %c", 'O');

            fclose(fptr);
            break;
        }

        case 4:{
            FILE *fptr;
            fptr = fopen("try27.txt", "r");

            printf(" %c", fgetc(fptr));
            printf(" %c", fgetc(fptr));
            printf(" %c", fgetc(fptr));
            printf(" %c", fgetc(fptr));
            break;
        }

        case 5:{
            FILE *fptr;
            fptr = fopne("try27.txt", "r");

            fputc("M", fptr); 
        }
        
        default:
            printf("Something went wrong");
            break;
    }
}