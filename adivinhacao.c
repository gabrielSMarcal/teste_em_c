#include <stdio.h>

int main()
{
    //Cabeçalho    
    printf("****************************\n");
    printf("*Adivinhe o número secreto!*\n");
    printf("****************************\n\n");

    //Variáveis do jogo
    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

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
    }

    printf("Game Over");

    return 0;
}