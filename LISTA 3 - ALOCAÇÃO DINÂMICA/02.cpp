//2 Construa um programa (main) que aloque em tempo de execu¸c˜ao (dinamicamente) uma matriz
//de ordem m x n (linha por coluna), usando 1+m chamadas new. Agora, aproveite este programa
//para construir uma fun¸c˜ao que recebendo os parˆametros m e n aloque uma matriz de ordem m x
//n e retorne um ponteiro para esta matriz alocada. Crie ainda uma fun¸c˜ao para liberar a ´area de
//mem´oria alocada pela matriz. Finalmente, crie um novo programa (main) que teste/use as duas
//fun¸c˜oes criadas acima.
#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include<stdlib.h>


int** alocarMatriz(int Linhas,int Colunas){

  int i,j;

  int **m = (int**)malloc(Linhas * sizeof(int*));

  for (i = 0; i < Linhas; i++){
       m[i] = (int*) malloc(Colunas * sizeof(int));
       for (j = 0; j < Colunas; j++){
            m[i][j] = 0;
       }
  }
return m;
}

void liberarMatriz(int ** mat){
    free(mat);
}



main(){

    int ** m = alocarMatriz(3,3);

    int i,j;

    for ( i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for ( i = 0 ; i < 3 ; i++){
            printf("\n");
        for(j = 0 ; j < 3; j++){
            printf("[%d]", m[i][j]);
        }
    }

    liberarMatriz(m);

}