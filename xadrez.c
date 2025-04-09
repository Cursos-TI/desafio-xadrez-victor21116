#include <stdio.h>

void MovTorre (int MT){
    if (MT > 0){
        printf("Direita!\n");
        MovTorre(MT - 1);
    }
}
void MovBispo (int PassoAtual, int PassosMaximos){
    if (PassoAtual> PassosMaximos) return;

    for (int  i = 1; i <= 1; i++){
        printf("Cima!\n");
        for (int j = 1; j <= i; j++){
            printf("Direita!\n");
        }
    }

    printf("\n");

    MovBispo(PassoAtual +1 , PassosMaximos);
        }

void MovRainha (int MR){
    if (MR > 0){
        printf("Esquerda!\n");
        MovRainha(MR - 1);
    }
}
void MovCavalo (int m){
    for (int i = 0; i < m; i++){
        for ( int cima = 0; cima < 2; cima++){
            printf("Cima!\n");
            }
            printf("Direita!\n");
            printf("\n");
        }
    }
       

int main(){
    //variáveis de controle
int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8, MovimentoCavalo = 0;

    //Chamada da função recursiva para movimentar a Torre 5 vezes para a Direita!
    printf("\n\nMovimentando a torre!\n\n");
    
    MovTorre(movimentoTorre);
    printf("\n\n");

    //Chamada da Função recursiva para movimentar o bispo para diagonal direita
    printf("\n\nMovimento bispo!\n\n");
    MovBispo(1, movimentoBispo);

    // Chmamada da função para movimentar a rainha
    printf("\n\nMovimentando a Rainha!\n\n");
    
    MovRainha(movimentoRainha);

    printf("\n\nMovimento Cavalo!\n\n");
    printf("Quantos movimentos do cavalo vc quer fazer? ");
    scanf("%d", &MovimentoCavalo);
    
    MovCavalo(MovimentoCavalo);

}