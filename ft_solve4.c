void	ft_solve4(int matrix[4][4],int view[4])
{
	int	line;
	int	column;
	int	count;
	int	inner_count;

	line = 0;
	column = 0;
	inner_count = 1;

	// preenche de 1,2,3,4 quando a vista pede 4 torres.
	// rotate_count N: executa o preenchimento e gira Nx
	// ex: se colocar 4x, dá a volta completa.
	// com 5, volta a posição inicial.
	// é importante sempre voltar a posiçao inicial

	while (line < 4)
	{
		while (column < 4)
		{
			if (view[column] == 4)
			{
				count = 3;
				while (count >= 0)
				{
					matrix[count][column] = inner_count;
					inner_count++;
					count--;
				}
				inner_count = 1;
			}
			column++;
		}
		line++;
	}
	line = 3;
	column = 0;
	inner_count = 1;
}
