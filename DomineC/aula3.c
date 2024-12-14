//Operadores ternários e ponteiros

#include <stdio.h>

int main (){
    //Operador ternário cria uma expressão condicional similar a um if-else

    int a = 10,b=20, c, d;

    c = a>b ? a:b; // É composto de 3 partes: a>b é a condição o ? separa a condiçõ da expressão verdadeira e o : separa a expressão
    // verdadeira da falsa
    printf("O maior número é %d\n", c);

    d = a>b ? b:a;// a maior que b? se sim, então b, se não a.
    printf("\nO menor número é %d\n", d);


    //Ponteiros
    //Ponteiros são variáveis que armazenam endereços de memória e são utilizados para acessar variáveis indiretamente
    //O operador & é utilizado para obter o endereço de uma variável e * é utilizado para acessar o valor de uma variável através de um ponteiro
    int x = 10, y=12, *ptrX = &x, *ptrY = &y; //ponteiro p para a variável x
    

    printf("O valor de x é %d e o endereço de x é %p\n", x,ptrX);
    printf("O valor de y é %d e o endereço de y é %p\n", y,ptrY);

    // Passar o valor de y para x
    *ptrX = *ptrY;
    printf("O valor de x é %d e o endereço de x é %p\n", x,ptrX);
    
    return 0;
}