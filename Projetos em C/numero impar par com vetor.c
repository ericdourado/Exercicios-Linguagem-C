#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 5 - Escreva um programa que leia um vetor de 100 elementos.O programa deve
informar a quantidade de números ímpares existentes no vetor. Os valores armazenados
no vetor serão informados pelo usuário, ou gerados pelo computador.
*/
int main()
{
    int qtd_numeros_impares = 0;
    int vetor[100];

    for(int i = 0; i<100;i++){
        vetor[i] = i;
    }
    for(int i =0; i < 100; i++){
        if(vetor[i]%2==0){
            qtd_numeros_impares += 1;
        }

    }printf("\nA quantidade de numeros impares no vetor é: %d \n", qtd_numeros_impares);

    return 0;
    system("pause");
}
