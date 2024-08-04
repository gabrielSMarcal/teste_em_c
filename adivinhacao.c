#include <stdio.h>
#define TENTATIVAS 5

int main()
{
    //Cabeçalho    
    printf("****************************\n");
    printf("*Adivinhe o número secreto!*\n");
    printf("****************************\n\n");

    //Variáveis do jogo
    int numerosecreto = 42;

    int chute;

    //Jogo
    for(int i=1; i <=TENTATIVAS; i++) {

        printf("Tentativa %d de %d\n", i, TENTATIVAS);
        printf("Qual é o seu chute?  ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n\n", chute);

        if(chute < 0) {
            printf("Você não pode incluir números negativos, tente novamente\n\n");
            i--;
            continue;
        }

        int acerto = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acerto) {
            printf("Você acertou!\nParabéns\n\n");
            break;
        }
        else if(maior) {
            printf("O número secreto é menor que o seu chute\n\n");
        }
        else {
            printf("O número secreto é maior que o seu chute\n\n");
        }
        
    }

    printf("Game Over");

    return 0;
}