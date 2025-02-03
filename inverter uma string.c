#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, j;

    printf("digite uma string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1;

    for (i = length, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0';

    printf("string invertida: %s\n", reversed);

 return 0;   
}