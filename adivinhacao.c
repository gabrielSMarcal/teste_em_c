#include <stdio.h>
#include <wchar.h>

int main()
{
    //Cabeçalho    
    printf("****************************\n");
    printf("*Adivinhe o numero secreto!*\n");
    printf("****************************\n\n");

    //Jogo
    int numeroSecreto = 42;

    int chute;

    printf("Qual o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    return 0;
}