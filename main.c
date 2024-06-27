#include <stdio.h>
#include <stdlib.h>
#define JogX 'X'
#define JogO 'O'
#define Vazio ' '

int main() {
    int coordL, coordC;
    int rodada = 1, win = 0, escolha = 0;
    char matriz[3][3], jogador;

    for (coordL = 0; coordL < 3; coordL++) {
        for (coordC = 0; coordC < 3; coordC++) {
            matriz[coordL][coordC] = ' ';
        }
    }

    printf("Jogador 1, desejas ser X ou O? (Digite 1 para 'X' e 2 para 'O')");
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
            rodada--;
        } else if (coordC != 0 && coordC != 1 && coordC != 2 && coordL != 0 && coordL != 1 && coordL != 2){
            printf("Caractere invalido!");
        } else if (coordL < 0 && coordL > 2 && coordC < 0 && coordC > 2){
            printf("Coordenada invalida! Tente outra!\n");
            rodada--;
        }else if (coordL >= 0 && coordL < 3 && coordC >= 0 && coordC < 3) {
            matriz[coordL][coordC] = jogador;
        }
        } while (coordL < 0 && coordL > 2 && coordC < 0 && coordC > 2);
        
        printf("\n\n    0   1   2 \n");
        printf("\n0   %c | %c | %c ", matriz[0][0], matriz[0][1], matriz[0][2]);
	    printf("\n   -----------");
    	printf("\n1   %c | %c | %c ", matriz[1][0], matriz[1][1], matriz[1][2]);
	    printf("\n   -----------");
    	printf("\n2   %c | %c | %c ", matriz[2][0], matriz[2][1], matriz[2][2]);

        for(int j = 0; j < 3; j++){
            win = 0;
            for(int i = 0; i < 3; i++){
                if(matriz[i][j] == 'X'){
                    win++;
                }
            }
            if (win == 3){
                printf("\nJogador 'X' ganhou! :D\n");
                return 0;
            }
        }

        rodada++;
    }
//VITORIA
    for(int j = 0; j < 3; j++){
        win = 0;
        for(int i = 0; i < 3; i++){
            if(matriz[i][j] == 'X'){
                win++;
            }
        }
        if (win == 3){
            printf("\nJogador 'X' ganhou! :D\n");
            return 0;
        }
    }

    printf("\n\nDeu velha! :P\n");

    return 0;
}