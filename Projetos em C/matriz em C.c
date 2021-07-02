#include <stdio.h>
#include <stdlib.h>
/*
Tarefa 7 - Construa uma matriz de 3 x 3 contendo zero(0) em cada célula.
*/
/*
RESPOSTA ALTERNATIVA
matriz[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
*/
int main()
{
    int matriz[3][3];
    for(int l = 0; l<3; l++){
        for(int c = 0; c<3; c++ ){
            matriz[l][c] = 0;
        }
    }


    for(int l = 0; l<3; l++){
        for(int c = 0; c<3; c++ ){
            printf("%d",matriz[l][c]);
        }
    }
    return 0;
    system("pause");
}
