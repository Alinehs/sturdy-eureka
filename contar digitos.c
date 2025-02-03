#include <stdio.h>
int main() {
    int num, count = 0;
    printf("digite um numero: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }
    
    printf("O numero de digitos é: %d\n", count);
    return 0;
}