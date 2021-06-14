void 	ft_solve1(int matrix[4][4],int view[4])
{
	int	line;
	int	column;
	int	count;

	line = 3;
	column = 0;

	// preenche de 4 quando a vista pede 1 torre.
	while (line >= 0)
	{
		while (column <= 3)
		{
			if (view[column] == 1)
			{
				matrix[line][column] = 4;
			}
			column++;
		}
		line--;
	}
}
