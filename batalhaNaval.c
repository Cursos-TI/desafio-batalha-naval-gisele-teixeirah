#include <stdio.h>

// Desafio Batalha Naval - Nivel Novato

int main()
{
    // Declarando uma matriz de tamanho fixo 10x10
    int tabuleiro[10][10];
    int linha, coluna;

    // Inicializando o tabuleiro com água (0)
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            tabuleiro[linha][coluna] = 0;
        }

        printf("\n");
    }

    // Definindo os navios (tamanho 3)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linhaHorizontal = 2, colunaHorizontal = 1;
    int linhaVertical = 5, colunaVertical = 4;

    // Validação: garantir que cabem no tabuleiro
    if (colunaHorizontal + 2 < 10)
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    }

        else
        {
            printf("Navio horizontal fora dos limites do tabuleiro!\n");
        }

        if (linhaVertical + 2 < 10)
        {
            for (int i = 0; i < 3; i++)
            { // Verifica se já tem navio no local (não pode sobrepor)
                if (tabuleiro[linhaVertical + i][colunaVertical] == 3)
                {
                    printf("Sobreposição detectada! O navio vertical não pode ser posicionada aqui.\n");
                    return 1;
                }
                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
            }
        }
        else
        {
            printf("Navio vertical fora dos limites do tabuleiro!\n");
        }
        // Exibindo o tabuleiro

        printf("\n==== Tabuleiro da Batalha Naval ====\n\n");

        for (linha = 0; linha < 10; linha++)
        {
            for (coluna = 0; coluna < 10; coluna++)
            {
                printf("%d\t", tabuleiro[linha][coluna]);
            }

            printf("\n");
        }
     

    return 0;
}
