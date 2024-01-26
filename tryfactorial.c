# include<stdio.h>

int main(){
    int n,fac = 1;

    printf("ENter the number which factorial you want to take out: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        fac = fac*i;
    }
    printf("%d", fac);
}