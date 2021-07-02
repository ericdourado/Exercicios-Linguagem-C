#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 3 - Escreva uma função que classifique o IMC. Ele deve receber o valor do IMC e
imprimir a classificação.
*/
int calcularMassaCorporal(float h, float p){
    float IMC;
    IMC = p/(h*h);
    printf("\nSeu IMC e: %.2f",IMC);
    if(IMC < 18.5){
        printf("\nAbaixo do peso");
    }else if(IMC < 24.9){
        printf("\nPeso normal");
    }else if(IMC < 29.9){
        printf("\nsobrepeso");
    }else if(IMC < 34.9){
        printf("\nObesidade grau I");
    }else if(IMC < 39.9){
        printf("\nObesidade grau II");
    }else if(IMC >=40){
        printf("\nObesidade grau III ou mórbida");
    }
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
