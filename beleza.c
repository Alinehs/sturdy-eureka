#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");
    char nome [20];
    
    printf("digite seu primeiro nome: ");
    scanf("%s", nome);
    
    printf("\nO nome digitado foi: %s", nome);
    
    return 0;
}
