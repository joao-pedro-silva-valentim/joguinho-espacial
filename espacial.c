#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int energia = 100;
    int pontos = 0;
    int evento;
    int continuar = 1;

    srand(time(NULL));

    printf("=== MISSAO RESGATE ESPACIAL ===\n");

    while (energia > 0 && continuar == 1)   
    {

        printf("\nEnergia atual: %d\n", energia);
        printf("Pontos atuais: %d\n", pontos);

        evento = rand() % 4;

        if (evento == 0)
        {
            printf("\nVoce encontrou combustivel espacial!\n");
            energia = energia + 20;
        }
        else if (evento == 1)
        {
            printf("\nAtaque alienigena!\n");
            energia = energia - 30;
        }
        else if (evento == 2)
        {
            printf("\nTempestade espacial encontrada!\n");
            energia = energia - 15;
        }
        else
        {
            printf("\nSobrevivente resgatado com sucesso!\n");
            pontos = pontos + 50;
        }

        if (energia <= 0)
        {
            printf("\nSua nave ficou sem energia!\n");
            break;
        }

        printf("\nDeseja continuar?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        scanf("%d", &continuar);
    }

    printf("\n=== FIM DE JOGO ===\n");
    printf("Pontuacao final: %d\n", pontos);

    return 0;
}