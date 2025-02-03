#include <stdio.h>

int main() {
    int n;

    printf("digite o numero de termos de sequencia de fibonacci: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("sequencia de fibonacci: %d %d", a, b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d", c);
        a =  b;
        b = c;
    }

    printf("\n");
    return 0;
}