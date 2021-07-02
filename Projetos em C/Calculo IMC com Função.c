#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 2 - Escreva uma função para calcular o Índice de Massa Corporal(IMC), recebendo
como entrada, duas variáveis float: altura e peso. Segue abaixo a fórmula.
*/
int calcularMassaCorporal(float h, float p){
    float IMC;
    IMC = p/(h*h);
    printf("\nSeu IMC e: %.2f",IMC);
}
int main()
{
    float altura;
    float peso;
    printf("Digite a altura da pessoa:\n");
    scanf("%f",&altura);
    printf("Digite o peso da pessoa:\n");
    scanf("%f",&peso);

    calcularMassaCorporal(altura,peso);

    return 0;
    system("pause");
}
