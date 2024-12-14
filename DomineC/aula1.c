// Declaração de Estrutura do código em C , variáveis e Tipos de dados e operadores aritiméticos

//Importação da biblioteca padrão

#include <stdio.h> // ".h" indica que é um arquivo de cabeçalho

//Função main é a função principal do programa em C

int main() {
    //Declarando variáveis
    int a = 10; //Variável inteira
    float b = 10.5; //Variável float
    char c = 'A'; //Variável char
    double d= 10.5; //Variável double
    _Bool e = 0; //Variável booleana

    //Imprimindo variáveis
    printf("Valor de a = %d\n", a);
    printf ("Valor de b = %f\n", b);
    printf("Valor de c= %c\n", c);
    printf("Valor de d = %f\n", d);
    printf("Valor de e = %d\n", e);

    // Operação com as variáveis

    int soma = a+b;
    printf("Soma de a e b = %d\n", soma); // Note que o valor de b é convertido para inteiro

    // A demais operações são bem similares (subtração, multiplicação e divisão)

    //Vamos fazer um exemplo de módulo que é um pouco mais complexo e utilizado  para cálculo de números primos

    int numero = 10;
    int resto = numero % 2 ; // Resto da divisão de numero por 2
    printf("O Resto da divisão de 10 por 2 é %d\n",resto);

    // Incrementando e decrementando variáveis

    a++;
    printf("Incrementando a = %d\n", a);

    b--;
    printf("Decrementando b = %f\n", b);

    ++a;
    printf("Incrementando a = %d\n", a);

    --b;
    printf("Decrementando b = %f\n", b);


    // Operadores relacionais, fazer comparação de dois valores

    int x =10;
    int y =20;

    printf("x é igual a y? %d\n", x==y); // 0 é falso e 1 é verdadeiro
    printf("x é diferente de y? %d\n", x!=y);

    printf("x é maior que y? %d\n", x>y);






    // Retorno da função main
    return 0;
    
}

