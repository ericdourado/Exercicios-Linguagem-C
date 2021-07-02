#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 8 - Construa uma matrix 5 x 2. Coloque valores variados para cada célula. Gere a
média dos valores de cada coluna.
*/
int main()
{
    int matriz[5][2] ={{2,4},{5,7},{9,1},{3,1},{6,0}};
    float somaColunaEsquerda = 0;
    float somaColunaDireita = 0;
    float mediaColunaEsquerda, mediaColunaDireita;
        for(int l = 0; l<5; l++){
            for(int c = 0; c < 2; c++){
                if(matriz[l][c] == matriz[l][0]){
                    somaColunaDireita += matriz[l][0];
                }else if(matriz[l][c] == matriz[l][1]){
                    somaColunaEsquerda += matriz[l][1];
                }
            }
        }

    mediaColunaDireita = (somaColunaDireita)/5;
    mediaColunaEsquerda = (somaColunaEsquerda)/5;

    printf("A media dos valores da coluna do lado direito é: %.2f\n", mediaColunaDireita);
    printf("A media dos valores da coluna do lado esquerdo é: %.2f\n",mediaColunaEsquerda);


    return 0;
    system("pause");
}
