#include <stdio.h>
#include <stdlib.h>
#define JogX 'X'
#define JogO 'O'
#define Vazio '.'
//Rodada + Jogador/ Falta corrigir erro Vazio
//rodada será aumentada +1 a cada jogada, até atingir o max 9 (velha), mas parará caso alguem
//vença. Faço um FOR gigante dentro do jogo todo? E dai quando alguem vencer, rodada
//recebe +10 só pra ficar maior que 9 e parar por ai?

//acho que é meio que isso mesmo, coloca uma opção de jogar de novo, aí switch case 1 ou 0 tlgd,
//aí a depender da resposta, ele fica em um while, ou do while
int main() {
    int linha, coluna, coordL, coordC;
    int rodada, vitoria, user, escolha;
    char tabuleiro[3][3];

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            tabuleiro[linha][coluna] = '.';
        }
    }

    /* //SELECIONAR ESCOLHA
    printf("Desejas ser X ou O? (Digite 1 para X e 2 para O)");
    scanf("%d", &escolha);
    if (escolha == 1){
        if (rodada % 2 == 1) {
            jogador = 'X';
    }
    else {
        jogador = 'O';
    } else {  //Jogador quer ser O BOLA
            if (rodada % 2 == 1) {
            jogador = 'O';
    }
    else {
        jogador = 'X';
      }
    }
*/
while (1){
        printf("Vez de Jogador %c: ", JogX);
        scanf("%d %d", &coordL, &coordC);

    //Se posiçao existe, e se for mt grande
        if (coordL >= 0 && coordL < 3 && coordC >= 0 && coordC < 3) {
            tabuleiro[coordL][coordC] = JogX;
        } else {
            printf("Coordenada invalida! Tente de novo!\n");
        }
   // Se estiver preenchido (diferente de vazio)
        if (tabuleiro[coordL][coordC] =! Vazio){
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
