// Controle de fluxo while

#include<stdio.h>
#include<stdlib.h>

int main() {
    int i = 0;
    while (i < 10){
        i++;
        printf("i = %d\n ", i);
    }

    // Do while age de forma similar porém ele executa o bloco antes da verificação

    do{
        i++;
        printf("i = %d\n", i);
        }while (i <10);// Notamos como o bloco é executado ele faz 11 iterações
    
    
    return 0;
}