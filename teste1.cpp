#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt-br");
    char nome [20];
    int idade;
    float peso;

    printf("digite seu primeiro nome: ");
    scanf("%s", nome);
    printf ("digite sua idade: ");
    scanf("%d", &idade);
    printf ("digite seu peso: ");
    scanf("%f", &peso);

    printf("\nO nome digitado foi: %s", nome);
    printf("\nA idade digitada foi: %d", idade);
    printf("\nO peso digitado foi: %.2f kg", peso);
    
    
    return 0;
}