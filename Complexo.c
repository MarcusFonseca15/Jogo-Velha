#include <stdlib.h>
#define JogX 'X'
#define JogO 'O'
int main(){
int linha, coluna;
char tabuleiro[3][3];
int coordL,coordC;

for (linha=0; linha<3; linha++){           //Com esses dois loops, coloca um
    for (coluna=0; coluna<3; coluna++){   //underline em cada posição do tabu
        tabuleiro[linha][coluna] = '.';
    }
}
printf("Vez de Jogador %c: ", JogX);
scanf("%d", &coordL);
scanf("%d", &coordC);

//if (tab[coordL][coordC] == 0){ //Se a posiçao estiver vazia (0)
if(coordL == 0 && coordC == 0){
    tabuleiro[0][0] = JogX;
} else if (coordL == 0 && coordC == 1){
    tabuleiro[0][1] = JogX;
} else if (coordL == 0 && coordC == 2){
    tabuleiro[0][2] = JogX;
} else if (coordL == 1 && coordC == 0){
    tabuleiro[1][0] = JogX;
} else if (coordL == 1 && coordC == 1){
    tabuleiro[1][1] = JogX;
} else if (coordL == 1 && coordC == 2){
    tabuleiro[1][2] = JogX;
} else if (coordL == 2 && coordC == 0){
    tabuleiro[2][0] = JogX;
} else if (coordL == 2 && coordC == 1){
    tabuleiro[2][1] = JogX;
} else if (coordL == 2 && coordC == 2){
    tabuleiro[2][2] = JogX;
}
//} else printf("Já está preenchido!");  //Caso contrário, alguem ja jogou nela
    
for (linha=0; linha<3; linha++){
    for (coluna=0; coluna<3; coluna++){
        printf("%c ", tabuleiro[linha][coluna]);
    }
    printf("\n");
}


    return 0;

        /*Matriz zerada. 0 indica que não possui nem X nem O nela.
    1 indica X, e 2 indica O.
        [0] [1] [2]          [0] [1] [2]
    [0] 00  01  02       [0]  1   2   3
    [1] 10  11  12       [1]  4   5   6
    [2] 20  21  22       [2]  7   8   9
    */
}
