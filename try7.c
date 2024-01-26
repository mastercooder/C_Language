#include <stdio.h>

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("It is not a prime number.\n");
    } else {
        int isPrime = 1;
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("It is a prime number.\n");
        } else {
            printf("It is not a prime number.\n");
        }
    }

    return 0;
}
