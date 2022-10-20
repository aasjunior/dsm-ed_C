#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matricula;
    printf("Digite a matricula:\n");
    scanf("%d", &matricula);
    calcularSalario();
    return 0;
}

int calcularSalario(){
    double salario_base, salario_final;
    int hrs_trabalhadas;

    printf("Digite o salário base: R$ ");
    scanf("%lf", &salario_base);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &hrs_trabalhadas);

    if(hrs_trabalhadas<20){
        salario_final = (salario_base * 0.3) + salario_base;
    }else{
        salario_final = salario_base;
    }
    printf("Salário total: R$ %lf", salario_final);
}
