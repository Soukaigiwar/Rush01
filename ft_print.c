#include <stdio.h>

void	ft_print(int matrix[4][4])
{
	int	line, column;
	line = 0;
	column = 0;
	// ft_print: desenha a matriz na tela

	while (line < 4)
	{
		while (column < 4)
		{
			printf ("%d ", matrix[line][column]);
			column++;
		}
		printf ("\n");
		column = 0;
		line++;
	}
}
