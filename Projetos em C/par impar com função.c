#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 1 - Escreva um programa que receba um número inteiro como parâmetro e imprima
“par” ou “ímpar”.
*/

int imparPar(int x){
    if(x % 2 == 0){
        printf("\nO numero %d é par\n",x);
    }else{
        printf("\nO numero %d é impar\n",x);
    }
}
int main()
{
    printf("\nDigite um valor:");
    int y;
    scanf("%d",&y);
    imparPar(y);


    return 0;

    system("pause");
}
