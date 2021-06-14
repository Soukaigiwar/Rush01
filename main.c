/*
Nesse main tem os protótipos das funcoes:
			ft_imprimir		>>> exibe a matriz na tela
			ft_rotate		>>> rotaciona a matriz sentido anti horario
			ft_fill			>>> funcao principal que vai preenchendo com numeros
			ft_zero			>>> funcao que preenche tudo com zero para começar
			ft_look_from	>>> funcao que indica para as funções ft_solveX.c
								qual o ponto de vista e quantas caixas sao visiveis
			ft_solve1.c		>>> testa se daquele ponto de vista pede 1 caixa e preeche adequadamente
			ft_solve2.c		>>> testa se daquele ponto de vista pede 2 caixa e preeche adequadamente
			ft_solve3.c		>>> testa se daquele ponto de vista pede 3 caixa e preeche adequadamente
			ft_solve4.c		>>> testa se daquele ponto de vista pede 4 caixa e preeche adequadamente

/////////// FALTA FAZER:
			testar exaustivamente com muitas combinacões
			mensagem "Error" em caso de erro.
*/

#include <stdio.h>
void ft_print(int matrix[4][4]);
int ft_rotate(int matrix[4][4]);
int ft_fill(int matrix[4][4], int up[4], int down[4], int left[4], int right[4]);
int ft_zero(int matrix[4][4]);
//int look_from(int look_from[4]);

int	main(void)
{
	// Thales, o UP tem que inverter os numeros antes de popular o vetor,
	// pq olhando pela vista dele, é 1 2 3 4, e não como quem ta olhando
	// do DOWN.

	// int	up[4] = {2,2,3,1};

	// // O DOWN nao precisa inverter

	// int	down[4] = {3,2,2,1};

	// // o LEFT também nao precisa

	// int	left[4] = {1,3,2,4};

	// // o RIGHT precisa pq olhando da vista dele os numeros vem de baixo
	// // pra cima.

	// int	right[4] = {1,2,2,2};

	int up[4] = {3,1,2,3}; // tem que chegar invertido
	int down[4] = {1,3,2,2};
	int left[4] = {3,2,2,1};
	int right[4] = {3,1,2,2}; // tem que chegar invertido

	int matrix[4][4];
	int	line;
	int	column;

    //preenche toda a matrix de zeros.
    ft_zero(matrix);
    // inicia o preenchimento
    ft_fill(matrix, up, down, left, right);
    return (0);
}
