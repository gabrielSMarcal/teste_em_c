#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Cabeçalho    
    printf("****************************\n");
    printf("*Adivinhe o número secreto!*\n");
    printf("****************************\n\n");

    //Gerador de número aleatório
    int sec = time(0);
    srand(sec);
    int gerador = rand();

    //Variáveis do jogo
    int chute;

    int numerosecreto = gerador % 100;
    int tentativas = 1;
    double pontos = 1000;

    

    //Jogo
    while(1){

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?  ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n\n", chute);

        if(chute < 0) {
            printf("Você não pode incluir números negativos, tente novamente\n\n");
            continue;
        }

        int acerto = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acerto) {
            printf("Você acertou em %d tentativas!\nParabéns\n\n", tentativas);
            break;
        }
        else if(maior) {
            printf("O número secreto é menor que o seu chute\n\n");
        }
        else {
            printf("O número secreto é maior que o seu chute\n\n");
        }
        tentativas++;

        //Sistema de pontuação
        double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
        
        pontos = pontos - pontosperdidos;
    }

    //Resultado do jogo
    printf("Game Over");

    printf("Pontuação final: %.2f", pontos);

    return 0;
}