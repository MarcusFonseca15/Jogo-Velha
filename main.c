#include <stdio.h>
#include <stdlib.h>
#define Vazio ' '

int main() {
    int coordL, coordC;
    int rodada = 1, escolha = 0;

    char matriz[3][3], jogador;

    for (coordL = 0; coordL < 3; coordL++) {
        for (coordC = 0; coordC < 3; coordC++) {
            matriz[coordL][coordC] = ' ';
        }
    }

    printf("Desejas ser X ou O? (Digite 1 para 'X' e 2 para 'O')");
     //SELECIONAR ESCOLHA
     while (escolha != 1 && escolha != 2){
        scanf("%d", &escolha);
        if (escolha != 1 && escolha != 2){
            printf("Escolha invalida, tente novamente!");
        }
     }
    while (rodada < 10){
        if (escolha == 1) {  //Jogador quer ser o XIS
        if (rodada % 2 == 1) {
            jogador = 'X';
      } else {
            jogador = 'O';
    }} else if (escolha == 2) {  //Jogador quer ser O BOLA
        if (rodada % 2 == 1) {
            jogador = 'O';
        } else {
            jogador = 'X';
        } 
    }
        printf("\n\nVez de Jogador '%c':\n", jogador);
    do {
        scanf("%d %d", &coordL, &coordC);

    //Condições de posic ocupada, o alem dos limites
        if (matriz[coordL][coordC] != Vazio){
            printf("Coordenada ocupada! Tente outra!");
        } else if (coordL < 0 && coordL > 2 && coordC < 0 && coordC > 2){
            printf("Coordenada invalida! Tente outra!\n");
        } else {
            matriz[coordL][coordC] = jogador;
            break;
        }
        } while (1);
        
        printf("\n\n    0   1   2 \n");
        printf("\n0   %c | %c | %c ", matriz[0][0], matriz[0][1], matriz[0][2]);
	    printf("\n   -----------");
    	printf("\n1   %c | %c | %c ", matriz[1][0], matriz[1][1], matriz[1][2]);
	    printf("\n   -----------");
    	printf("\n2   %c | %c | %c ", matriz[2][0], matriz[2][1], matriz[2][2]);

    //VITORIA
    for(int j = 0; j < 3; j++){
        if (matriz[0][j] == jogador && matriz[1][j] == jogador && matriz[2][j] == jogador){
            printf("\nJogador '%c' ganhou! :D\n", jogador);
            return 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == jogador && matriz[i][1] == jogador && matriz[i][2] == jogador) {
            printf("\nJogador '%c' ganhou! :D\n", jogador);
            return 0;
        }
    }


        rodada++;
    }

    printf("\n\nDeu velha! :P\n");

    return 0;
}