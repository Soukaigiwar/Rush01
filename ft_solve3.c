#include <stdio.h>

void	ft_print(int matrix[4][4]);

void 	ft_solve3(int matrix[4][4],int view[4])
{
	int	line;
	int	column;
	int	count;

	line = 3;
	column = 0;
	count = 3;

	// preenche de 2,3,4,1 quando a vista pede 1 torre.
	while (line >= 0)
	{
		while (column <= 3)
		{
			// se tiver 3| [2] 0 0 0
			// coloca   3| [2] 3 4 1
			// if (view[column] == 3 && matrix[3][column] == 2)
			// 	{
			// 			matrix[2][column] = 3;
			// 			matrix[1][column] = 4;
			// 			matrix[0][column] = 1;
			// 	}

			// se tiver 3| [1] 0 0 [2]
			// coloca   3| [1] 3 4 [2]
			if (view[column] == 3 && matrix[3][column] == 1 && matrix[0][column] == 2)
			{
					matrix[2][column] = 3;
					matrix[1][column] = 4;
			}

			// se tiver 3| [2] 0 [4] 0
			// coloca   3| [2] 3 [4] [1]
			if (view[column] == 3 && matrix[3][column] == 2 && matrix[1][column] == 4)
			{
					matrix[0][column] = 1;
					matrix[2][column] = 3;
			}

			// se tiver 3| [1] 0 0 [3]
			// coloca   3| [1] 2 4 [3]
			if (view[column] == 3 && matrix[3][column] == 1 && matrix[0][column] == 3)
			{
					matrix[2][column] = 2;
					matrix[1][column] = 4;
			}

			// se tiver 3| [1] 0 0 [4]
			// coloca   3| [1] 3 2 [4]
			if (view[column] == 3 && matrix[3][column] == 1 && matrix[0][column] == 4)
			{
					matrix[2][column] = 3;
					matrix[1][column] = 2;
			}

			// se tiver 3| 0 0 0 [4]
			// coloca   3| 2 0 0 [4]
			if (view[column] == 3 && matrix[0][column] == 4)
					matrix[3][column] = 2;

			// se tiver 3| 0 0 [3] [4]
			// coloca   3| 2 1 [3] [4]

			if (view[column] == 3 && matrix[1][column] == 1 && matrix[0][column] == 4)
					{
						//printf("flag");

						matrix[3][column] = 2;
						matrix[2][column] = 1;
					}

			// se tiver 3| 0 0 [4][3]
			// coloca   3| 1 2 [4][3]
				if (view[column] == 3 && matrix[1][column] == 4 && matrix[0][column] == 3)
            {
                matrix[3][column] = 1;
                matrix[2][column] = 2;
            }

			// se tiver 3| 0 0 0 [3]
			// coloca   3| 0 0 4 [3]
				if (view[column] == 3 && matrix[0][column] == 3)
            {
                matrix[1][column] = 4;
                matrix[2][column] = 2;
                matrix[3][column] = 1;
            }

			// se tiver 3| 0 0 0 x[4] se o ultimo for diferente de 4
			// coloca   3| 0 0 4 x
				if (view[column] == 3 && matrix[0][column] != 4)
                matrix[1][column] = 4;

			// se tiver 3| 0 0 [3][4]
			// coloca   3| 2 1 [3][4]
				//printf("%d \n ", matrix[1][0]);
				if (view[column] == 3 && matrix[0][column] == 4 && matrix[1][column] == 3)
				{
                matrix[2][column] = 1;
                matrix[3][column] = 2;
				}

			// se tiver 3| 0 0 [4] [1]
			// coloca   3| 2 3 [4] [1]
				if (view[column] == 3 && matrix[0][column] == 1 && matrix[1][column] == 4)
				{
                matrix[2][column] = 3;
                matrix[3][column] = 2;
				}

			column++;
		}
		line--;

	}
}
