#include <stdlib.h>
#include <stdio.h>

void iniciarTabuleiro(int tabuleiro[10][10]){
    for (int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tabuleiro[i][j] = 1;
        }
    }
}

void exibirTabuleiro(int tabuleiro[10][10]){ //tamanho do tabuleiro
    for (int i=0; i<10; i++){
        printf("\t%c", 'A'+i);
    }
    printf("\n");

    //forma do tabuleiro
    for (int i=0; i<10; i++){
        printf("%d", i);
        for(int j=0; j<10; j++){
            if(tabuleiro[i][j]==1){
                printf("\t~"); //agua
            }else if(tabuleiro[i][j]==2){
                printf("\tX"); //acerto alguma embarcacao
            }else if(tabuleiro[i][j]==0){
                printf("\t-"); //nao acertou nada 
            }
        }
        printf("\n");
    }
}

int main(){
    int tabuleiro[10][10];
    int tentativas=0;
    int acertos = 0;

    iniciarTabuleiro(tabuleiro);
    printf("\n");
    
    do{
        exibirTabuleiro(tabuleiro);

    }while(acertos!=3);


    return 0;
}