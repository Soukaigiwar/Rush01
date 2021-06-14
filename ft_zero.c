#include <stdio.h>

// preenche todas as posições com 0 para iniciar o jogo.
void	ft_zero(int matrix[4][4])
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	while (line <= 3)
	{
		while (column <=3)
		{
			matrix[line][column] = 0;
			column++;
		}
		column = 0;
		line++;
	}
}
