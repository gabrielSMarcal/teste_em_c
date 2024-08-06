#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Cabeçalho
    printf("\n\n");
    printf("    ____                                              \n");
    printf("   /\\' .\\    _____                                  \n");
    printf("  /: \\___\\  / .  /\\                                 \n");
    printf("   \' / . / /____/..\\       Bem vindo ao              \n");
    printf("   \\/___/  \\'  '\\  /  nosso jogo de Adivinhação!   \n");
    printf("            \\'__'\\/                                 \n");
    printf("\n\n");

    //Gerador de número aleatório
    int sec = time(0);
    srand(sec);
    int gerador = rand();

    //Variáveis do jogo
    int chute;

    int numerosecreto = gerador % 100;
    int tentativas = 1;
    double pontos = 1000;

    //Dificuldade do Jogo
    int nivel;
    printf("Qual dificuldade você deseja jogar?\n");
    printf("1. Fácil || 2. Médio || 3. Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int acerto = 0;

    int tentativasmax;
    switch(nivel) {
        case 1:
            tentativasmax = 15;
            printf("Número de tentativas possíveis: %d\n", tentativasmax);
            break;
        
        case 2:
            tentativasmax = 10;
            printf("Número de tentativas possíveis: %d\n", tentativasmax);
            break;

        default:
            tentativasmax = 5;
            printf("Número de tentativas possíveis: %d\n", tentativasmax);
    }
    
    //Jogo
    for (int i=1; i<=tentativasmax; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?  ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n\n", chute);

        if(chute < 0) {
            printf("Você não pode incluir números negativos, tente novamente\n\n");
            continue;
        }

        acerto = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acerto) {
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
    printf("Game Over\n\n");

    if (acerto) {
        printf("\n\n");
        printf("     .oOOOOOOo.                                                              \n");
        printf("   oO'        'Oo                                                            \n");
        printf("  O'  O      O  'O                Você ganhou!                               \n");
        printf(" O                O   Você acertou em %d tentativas, Parabéns!! \n",  tentativas);
        printf(" O                O                                                          \n");
        printf(" O  Oo,      ,oO  O          Pontuação final: %.2f \n                  ", pontos);
        printf("  O. 'OOOOOOOO' .O                                                           \n");
        printf("   Yb.        .dP                                                            \n");
        printf("jgs  'YOOOOOOP'                                                              \n");
        printf("\n\n");

    } else {
        printf("\n\n");
        printf("                                                               ..           \n");
        printf("                               ,,,                         MM .M            \n");
        printf("                           ,!MMMMMMM!,                     MM MM  ,.        \n");
        printf("   ., .M                .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'        \n");
        printf(" . M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M'         \n");
        printf(";M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M           \n");
        printf(" M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM           \n");
        printf(" 'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'           \n");
        printf("  MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'            \n");
        printf(" MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM             \n");
        printf(" 'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM             \n");
        printf("  ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM            \n");
        printf("   MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM           \n");
        printf("  .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM          \n");
        printf("  MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM         \n");
        printf(" .MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'        \n");
        printf("AMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM''''''''''''          \n");
        printf("MMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM                      \n");
        printf(" '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM                      \n");
        printf("            MMM.            'MMMM!MMMM'            .MM                      \n");
        printf("             MMM.             '''   ''            .MM'                      \n");
        printf("              MMM.                               MMM'                       \n");
        printf("               MMMM            ,.J.JJJJ.       .MMM'                        \n");
        printf("                MMMM.       'JJJJJJJ'JJJM   CMMMMM                          \n");
        printf("                  MMMMM.    'JJJJJJJJ'JJJ .MMMMM'                           \n");
        printf("                    MMMMMMMM.'  'JJJJJ'JJMMMMM'                             \n");
        printf("                      'MMMMMMMMM'JJJJJ JJJJJ'                               \n");
        printf("                         ''MMMMMMJJJJJJJJJJ'                                \n");
        printf("                                 'JJJJJJJJ'                                 \n");
        printf("\n\n");
    }

    return 0;
}