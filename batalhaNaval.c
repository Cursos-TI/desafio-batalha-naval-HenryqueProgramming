/*

Batalha Naval - Tema 4

Arrays unidimensionais e bidimensionais

*/

include <stdio.h>

int main(){

    // Tabuleiro - 10X10

    int tabuleiro[10][10] = {0};

    // Representação dos navios

    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Posicionamento dos navios

    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[1][5] = 3;

    tabuleiro[4][6] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;

     // Printando o tabuleiro

     printf("Batalha naval\n\n");

     printf("  A B C D E F G H I J\n");
 
     for (int i = 0; i < 10; i++) {
         printf("%2d ", i + 1);
         for (int j = 0; j < 10; j++) {
             printf("%d ", tabuleiro[i][j]);
         }
         printf(" \n");
     }
 
     return 0;
 }
 
