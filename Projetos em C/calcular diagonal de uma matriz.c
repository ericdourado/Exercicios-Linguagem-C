#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 9 - Faça uma matriz 3 x 3, com valores aleatórios. Calcule os valores da diagonal
principal.
*/
int main()
{
    int somaDiagonal = 0;
    int matriz[3][3] = {{2,4,3},
                        {5,7,8},
                        {6,4,5}};
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            if(matriz[l] == matriz[c]){
                somaDiagonal += matriz[l][c];
            }
        }
    }printf("A soma dos valores diagonais da matriz e :%d",somaDiagonal);
    return 0;
    system("pause");
}
