// Operadores lógicos, bit a bit, especiais, endereço  e ternário

// Em sistemas embarcados é comum o uso de operadores bit a bit para manipular os registradores de hardware.

#include <stdio.h>

int main(){
// operadores lógicos
    int a = 1 , b = 1;

    int resultado = (a && b); // Se a e b forem verdadeiros resultado igual a 1
    int resultado2 = (a || b); // Se a ou b forem verdadeiros resultado igual a 1

    printf("Resultado: %d\n", resultado);
    printf("Resultado2: %d\n", resultado2);

    --a;//Deixando o valor de a igual a 0
    int resultado3 = !a; // Se a for falso(a=0) resultado igual a 1(verdadeiro)
    printf("Resultado : %d\n",resultado3);

    int resultado4 = (a && b) || !a;// a E b = 0. 0 OU 1 = 1
    printf("Resultado4: %d\n", resultado4);

// operadores bit a bit (podemos comparar e deslocar bits)
// Ao invés de usarmos && e || usamos & e | para comparar bits
    int bita= 5, bitb = 3, bitc=5;

    //AND
    int resultadobit0= bita & bitb; // 101 & 011 = 001
    printf("Resultado AND bit0: %d\n", resultadobit0);//comparação entre bits de a e b resultada em 0
    int resultadobit1 = bita & bitc; // 101 & 101 = 101
    printf("Resultado AND bit1: %d\n", resultadobit1);// Comparação entre o valor binário de a e c resulta em 5 (eles mesmos)

    //OR
    int resultadobit2 = bita | bitb;
    printf("Resultado OR bit2: %d\n", resultadobit2); // 101 | 011 = 111
    int resultadobit3 = bita | bitc;
    printf("Resultado OR bit3: %d\n", resultadobit3); // 101 | 101 = 101

    //XOR
    int resultadobit4 = bita ^ bitb;
    printf("Resultado XOR bit4: %d\n" ,resultadobit4);

// Deslocamento de bits
    int bitd = 1;
    int resultadobitdeslocado = bitd << 1; //Deslocando 1 bit para a esquerda
    printf("Resultado bit deslocado 1 bit para a esquerda: %d\n", resultadobitdeslocado);
    // Numéro 1 em binário é 0001, deslocando 1 bit para a esquerda temos 0010 que é igual a 2 em decimal

// Operador especial sizeof
    int e = 10; // 4 bytes
    float f = 10.0; //4 bytes
    double g = 10.0; // 8 bytes
    char h = 'A'; // 1 byte
    printf("Tamanho de e: %d bytes\n", sizeof(e));
    printf("Tamanho de f: %d bytes\n", sizeof(f));
    printf("Tamanho de g: %d bytes\n", sizeof(g));
    printf("Tamanho de h: %d bytes\n", sizeof(h));

// Usando o sizeof para variáveis singned e unsigned
    unsigned int i = 10;
    signed int j = -10;
    printf("Tamanho de i: %d bytes\n", sizeof(i));
    printf("Tamanho de j: %d bytes\n", sizeof(j));

long double k = 10.0;
printf("Tamanho de k: %d bytes\n", sizeof(k));


//Vamos estourar o tamanho de um short

short l = 42768;

printf("Valor de l: %d\n", l);
// O valor de l é -22768, pois o short tem 2 bytes e o valor máximo que ele pode armazenar é 32767

// vamos estourar o tamanho de um char
char m = 128;

printf("Valor de m estourado: %d e caractere: %c \n", m,m);

signed char n = -127;
printf("Valor de n: %d e caractere: %c\n",n,n);

//Pontos flutuantes
float o = 10.555666789;
double p = 10.555666789;
long double q = o + p;

printf("Valor de o %f\n", o);
printf("Valor de p: %f\n", p);
printf("Valor de q: %lf\n", q);

return 0;

}