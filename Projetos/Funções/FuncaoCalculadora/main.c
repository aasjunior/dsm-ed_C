#include <stdio.h>
#include <stdlib.h>

//fun��o somar
float somar(float n1, float n2){
    return n1 + n2;
}

//fun��o subtrair
float subtrair(float n1, float n2){
    return n1 - n2;
}

//fun��o dividir
float dividir(float n1, float n2){
    return n1 / n2;
}

//fun��o multiplicar
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
    printf("Subtra��o: %f", resultado);
    resultado = dividir(n1, n2);
    printf("Divis�o: %f", resultado);
    resultado = multiplicar(n1, n2);
    printf("Multiplica��o: %f", resultado);
}
