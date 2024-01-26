# include<stdio.h>

int main(){
    int a = 24;
    int b = 23;

    int *ptr = &a;
    int *_ptr = &b;

    int c = *ptr - *_ptr;
    printf(" \n");
    printf("------------------------------\n");
    printf(" %u and %u difference %d\n", ptr, _ptr, c);
    printf(" \n");

    _ptr = &a;
    printf("The difference is: %u\n", ptr == _ptr);
    printf("------------------------------\n");
    printf(" \n");


} 