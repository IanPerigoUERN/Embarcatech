// Controle de fluxo condicional com switch case

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao;
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Voce digitou 1\n");
            break;
        case 2:
            printf("Voce digitou 2\n");
            break;
        case 3:
            printf("Voce digitou 3\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    
    return 0;
}