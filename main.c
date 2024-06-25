#include <stdio.h>
#include <stdlib.h>
#define JogX 'X'
#define JogO 'O'
#define Vazio '.'
//jog (jogada) será aumentada +1 a cada jogada, até atingir o max 9 (velha), mas parará caso alguem
//vença. Faço um FOR gigante dentro do jogo todo? E dai quando alguem vencer, jog
//recebe +10 só pra ficar maior que 9 e parar por ai?
int main() {
    int linha, coluna, coordL, coordC, jog;
    char tabuleiro[3][3];

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            tabuleiro[linha][coluna] = '.';
        }
    }
while (1){
        printf("Vez de Jogador %c: ", JogX);
        scanf("%d %d", &coordL, &coordC);

    //Se posiçao existe, e se for mt grande
        if (coordL >= 0 && coordL < 3 && coordC >= 0 && coordC < 3) {
            tabuleiro[coordL][coordC] = JogX;
        } else {
            printf("Coordenada invalida! Tente de novo!\n");
        }
    //Se estiver preenchido (diferente de vazio)
        if (tabuleiro[cordL][cordC] =! Vazio){
            printf("JA PREENCHIDO! Tente de novo!");
        }

    //imprimir tabuleiro
        for (linha = 0; linha < 3; linha++) {
            for (coluna = 0; coluna < 3; coluna++) {
                printf("%c ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }
    }

        return 0;
}
