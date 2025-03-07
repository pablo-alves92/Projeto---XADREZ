/*
 * Projeto: Xadez em C.
 * Autor: Pablo Muriell Batista Alves.
 * Data de criação: 07/03/2025.
 * Última atualização: 07/03/2025.
 * Versão: 1.0
 * Descrição: Implementação do jogo de Xadez em linguagem C, desenvolvido para um projeto acadêmico.
 */

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int torre = 1, bispo = 1, rainha = 1;

    // Movimentação da TORRE!
    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }

    // Espaço para exibição.
    printf("\n\n");

    // Movimentação BISPO!
    do
    {
        printf("Cima, Direita\n");
        bispo++;

    } while (bispo <= 5);

    // Espaço para exibição.
    printf("\n\n");

    //Movimentação da RAINHA!
    for(rainha;rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }

    return 0;
}