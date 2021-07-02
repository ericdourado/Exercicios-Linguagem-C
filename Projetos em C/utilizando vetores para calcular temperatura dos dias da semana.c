#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 6 - Dadas as temperaturas que foram registradas diariamente durante uma semana,
deseja-se determinar em quantos dias dessa semana a temperatura esteve acima da
média. Escreva um programa (utilizando vetores) para calcular esta informação.
*/
int main()
{
    int diasDaSemana = 0;
    float media, somaTemperatura = 0;
    float temperaturas[7];
    printf("\nInforme a temperatura de segunda, terça, quarta, quinta,sexta sabado e domingo\n");
    for(int i= 0; i < 7; i++){
        printf("dia %d: ",i+1);
        scanf("%f",&temperaturas[i]);
        somaTemperatura += temperaturas[i];
    }
    media = somaTemperatura/7;

    printf("A média de temperatura é %.2f",media);

    for(int i = 0; i < 7; i++){
        if(temperaturas[i] > media){
            printf("\nA temperatura no dia %d foi maior do que a média da semana.\n", i+1);
            diasDaSemana +=1;
        }
    }printf("\n%d dias da semana estiveram acima da media\n",diasDaSemana);

    return 0;
    system("pause");

}
