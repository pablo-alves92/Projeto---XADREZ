/*
 * Projeto: Xadez em C.
 * Autor: Pablo Muriell Batista Alves.
 * Data de criação: 07/03/2025.
 * Última atualização: 07/03/2025.
 * Versão: 1.0
 * Descrição: Implementação do jogo de Xadez em linguagem C, desenvolvido para um projeto acadêmico.
 */

#include <stdio.h>

// Função que controla o movimento da TORRE!
void movimento_torre(int torre)
{
    if (torre <= 5)
    {
        printf("Direita\n");
        movimento_torre(torre + 1);
    }
}

// Função que controla o movimento do BISPO!
void movimento_bispo(int bispo)
{
    for (bispo; bispo <= 5; bispo++)
    {
        for (int i = 1; i <= 1; i++)
        {
            printf("Cima, direita\n");
        }
    }
}

// Função que controla o movimento da RAINHA!
void movimento_rainha(int rainha)
{
    if (rainha <= 8)
    {
        printf("Esquerda\n");
        movimento_rainha(rainha + 1);
    }
}

int main()
{
    // Declaração das variáveis
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    // Execução da movimentação da TORRE!
    movimento_torre(torre);

    // Espaço para exibição.
    printf("\n\n");

    // Execução da movimentação do BISPO!
    movimento_bispo(bispo);

    // Espaço para exibição.
    printf("\n\n");

    // Execução da movimentação da rainha
    movimento_rainha(rainha);

    // Espaço para exibição.
    printf("\n\n");

    // Movimentação CAVALO!
    for (int i = 1, j = 2; i <= 2; i++, j--)
    {
        printf("Cima\n");
        if (j == 1)
        {
            printf("Direita\n");
        }
    }

    return 0;
}