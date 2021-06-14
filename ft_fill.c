#include <stdio.h>

void	ft_solve1(int matrix[4][4], int view[4]);
void	ft_solve2(int matrix[4][4], int view[4]);
void	ft_solve3(int matrix[4][4], int view[4]);
void	ft_solve4(int matrix[4][4], int view[4]);
void	ft_print(int matrix[4][4]);
int		ft_rotate(int matrix[4][4]);

// ft_fill ja recebe como parametros os 4 pontos de vista, vai chamando as funçoes de teste e rotaciona

void	ft_fill(int matrix[4][4], int up[4], int down[4], int left[4], int right[4])
{
	// as vezes da esse erro e nao sei o que fazer. Não aprendi a ideia de ponteiros corretamente.
	printf("Por favor, não da erro 'Segmentation Fault'. Please!!!!\n");
	// resolve quando tem a frente so uma torre
	// e coloca o numero 4.
	int i;
	i = 2;
	while (i <= 4)
	{
		ft_solve1(matrix, down);
		ft_solve4(matrix, down);
		ft_rotate(matrix);
		ft_solve1(matrix, left);
		ft_solve4(matrix, left);
		ft_rotate(matrix);
		ft_solve1(matrix, up);
		ft_solve4(matrix, up);
		ft_rotate(matrix);
		ft_solve1(matrix, right);
		ft_solve4(matrix, right);
		ft_rotate(matrix);

		ft_solve3(matrix, down);
		ft_rotate(matrix);
		ft_solve3(matrix, left);
		ft_rotate(matrix);
		ft_solve3(matrix, up);
		ft_rotate(matrix);
		ft_solve3(matrix, right);
		ft_rotate(matrix);

		ft_solve2(matrix, down);
		ft_rotate(matrix);
		ft_solve2(matrix, left);
		ft_rotate(matrix);
		ft_solve2(matrix, up);
		ft_rotate(matrix);
		ft_solve2(matrix, right);
		ft_rotate(matrix);
		i++;
	}

	// imprime o resultado na tela

	ft_print(matrix);
}
