#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) isPrime = 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("O numero é primo.\n");
    } else {
        printf("O numero não é primo.\n");
    }
    
 return 0;
}