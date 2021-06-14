void 	ft_solve2(int matrix[4][4],int view[4])
{
	int	line;
	int	column;
	int	count;

	line = 3;
	column = 0;
	count = 3;
	// preenche de 3,2,1,4 quando a vista pede 2 torres,
	// e ja tem _ _ 1 4.
	while (line >= 0)
	{
		while (column <= 3)
		{
			// se tiver 2| 0 0 [4] [3]
			// coloca   2| 2 1 [4] [3]
			if (view[column] == 2 && matrix[0][column] == 3 && matrix[1][column] == 4)
				{
						matrix[2][column] = 1;
						matrix[3][column] = 2;
				}

			// se tiver 2| 0 0 [1] [4]
			// coloca   2| 3 2 [1] [4]
			if (view[column] == 2 && matrix[0][column] == 4 && matrix[1][column] == 1)
				{
						matrix[2][column] = 2;
						matrix[3][column] = 3;
				}

			// se tiver 2| 0 0 [4] [1]
			// coloca   2| 3 2 [4] [1]
			if (view[column] == 2 && matrix[0][column] == 1 && matrix[1][column] == 4)
				{
						matrix[2][column] = 2;
				}

			// se tiver 2| 0 [3] 0 0
			// coloca   2| 0 [3] 4 0
			if (view[column] == 2 && matrix[2][column] == 3)
					matrix[1][column] = 4;

			// se tiver 2| 0 0 0 [4]
			// coloca   2| 3 0 0 [4]
			if (view[column] == 2 && matrix[0][column] == 4)
				matrix[3][column] = 3;

			// se tiver 2| 0 0 [3] 0
			// coloca.  2| 0 4 [3] 0
			if (view[column] == 2 && matrix[1][column] == 3)
				matrix[2][column] = 4;

			// se tiver 2| 0 0 [4] 0
			// coloca.  2| 3 0 [4] 0
			if (view[column] == 2 && matrix[1][column] == 4)
				matrix[3][column] = 3;

			// se tiver 2| 0 0 [4] 0
			// coloca.  2| 3 0 [4] 0
			if (view[column] == 2 && matrix[3][column] == 1 && matrix[2][column] == 4)
				matrix[2][column] = 2;
			// se tiver 2| 0 [2] 0 0
			// coloca.  2| 3 [2] 0 0
			// if (view[column] == 2 && matrix[2][column] == 2)
			// 	matrix[3][column] = 3;

			// se tiver 2| 0 0 0 [!4]se o ultimo for diferente de 4
			// coloca.  2| 0 4 [!4] [!4]
			if (view[column] == 2 && matrix[1][column] != 4 && matrix[0][column] != 4)
				matrix[2][column] = 4;

			if (view[column] == 2 && matrix[0][column] == 4 && matrix[1][column] == 2 && matrix[3][column] == 3)
			{
				matrix[2][column] = 1;
			}
			column++;
		}
		line--;

	}
}
