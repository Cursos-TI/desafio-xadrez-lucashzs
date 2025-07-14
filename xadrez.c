#include <stdio.h>

int main (){
    
    //Movimentações da Torre - 5 casas pra direita
    printf("Movimentação da Torre:\n");
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n"); //Imprimindo a direção do Movimento
    }

    

    //Movimentação do Bispo - 5 casas na diagonal superior direira
    printf("Movimentação do Bispo:\n");
    int bispo = 0;

    while (bispo < 5)
    {
        //Imprimindo a direção do Movimento
        printf("Cima\n"); 
        printf("Direita\n");
        bispo++;
    }
   


    //Movimentação da Rainha - 8 casas para esquerda
    printf("Movimentação da Rainha:\n");
    
    int rainha = 0;
    do
    {
        //Imprimindo a direção do Movimento
       printf("Esquerda\n");
       rainha++;
    } while (rainha < 8);

    return 0;
}