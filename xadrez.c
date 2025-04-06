#include <stdio.h>
int main(){
int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;

    //variável de controle
    int i;

    //Loop para movimentar a Torre 5 vezes para a Direita!
    printf("Movimentando a torre!\n\n");

    for (i = 1; i <= movimentoTorre; i++){
        printf("Direita!\n");
    }

    //Loop para movimentar o bispo para diagonal direita
    i = 1;
    printf("\n\nMovimentando o bispo!\n\n");
    while(i <= movimentoBispo){

        printf("Cima, Direita!\n");
        i++;
    }
    // Loop para movimentar a rainha
    printf("\n\nMovimentando a Rainha!\n\n");
    i = 1;
    do{
        printf("Esquerda\n");
        i++;
    }while(i <= movimentoRainha);

}