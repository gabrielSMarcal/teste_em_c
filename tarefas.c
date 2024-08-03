//E X E R C Í C I O S
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite os numeros para multiplicacao\n");
    scanf("%d %d", &x, &y);

    int mult = x * y;

    printf("Resultado: %d", mult);

    return 0;

}