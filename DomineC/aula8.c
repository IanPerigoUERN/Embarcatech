// Funções são bloco de códigos que podem ser reutilizados em diferentes
// partes do programa. São definidas com o tipo de retorno.

#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b){
    return a+b;
}

int divisao (int a, int b){
    return a/b;
}

int main(void){
    int x = 10, y = 20;
    printf(" A soma de %d + %d = %d\n", x,y,soma(x,y));
    printf (" A divisão de %d por %d = %d\n", y,x,divisao(y,x));

    return 0;
}
