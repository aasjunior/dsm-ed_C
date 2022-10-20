#include <stdio.h>
#include <stdlib.h>

//função somar
float somar(float n1, float n2){
    return n1 + n2;
}

//função subtrair
float subtrair(float n1, float n2){
    return n1 - n2;
}

//função dividir
float dividir(float n1, float n2){
    return n1 / n2;
}

//função multiplicar
float multiplicar(float n1, float n2){
    return n1 * n2;
}

int main()
{
    float n1, n2, resultado;
    printf("Digite o valor de n1:");
    scanf("%f",&n1);
    printf("Digite o valor de n2:");
    scanf("%f",&n2);
    resultado = somar(n1, n2);
    printf("Soma: %f", resultado);
    resultado = subtrair(n1, n2);
    printf("Subtração: %f", resultado);
    resultado = dividir(n1, n2);
    printf("Divisão: %f", resultado);
    resultado = multiplicar(n1, n2);
    printf("Multiplicação: %f", resultado);
}
