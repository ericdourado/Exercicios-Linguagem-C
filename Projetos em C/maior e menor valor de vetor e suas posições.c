#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 4 - Escreva um programa que receba do usuário um vetor com 20 valores inteiros e
apresente o maior, o menor e suas respectivas posições em que os mesmos foram
informados. Caso existam números iguais mostre a posição da primeira ocorrência.
*/
int main()
{
    int vetor[20];
    int valorMaior = 0;
    int valorMenor = 999999999;
    printf("\nInforme 20 numeros: \n");
    for(int i =0; i < 20; i++){
        scanf("%d",&vetor[i]);
        if(valorMaior < vetor[i]){
            valorMaior = vetor[i];
        }
    }
    for(int i = 0; i < 20; i++){
        if(valorMenor > vetor[i]){
            valorMenor = vetor[i];
        }
    }
    for(int i = 0; i < 20; i++){
        if(valorMaior == vetor[i]){
            printf("\nO maior numero está na posição: %d\n", i);
            break;
        }
    }
    for(int i = 0; i < 20; i++){
        if(valorMenor == vetor[i]){
            printf("\nO menor numero está na posição: %d\n", i);
            break;
        }
    }
    printf("\nO maior numero e o: %d\n", valorMaior);
    printf("\nO menor numero e o: %d\n", valorMenor);
    return 0;
    system("pause");
}
