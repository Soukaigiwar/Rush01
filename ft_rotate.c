int* ft_rotate(int matrix[4][4])
{
	int	i;
	int	line;
	int	column;
	int	temp;

	i = 0;
	line = 0;
	column = 0;
	while (i < 1)
	{

		line = 1;
		column = 1;
		temp = matrix[line][column];
		matrix[1][1] = matrix[1][2];
		matrix[1][2] = matrix[2][2];
		matrix[2][2] = matrix[2][1];
		matrix[2][1] = temp;

		line = 0;
		column = 0;
		temp = matrix[line][column];
		matrix[0][0] = matrix[0][3];
		matrix[0][3] = matrix[3][3];
		matrix[3][3] = matrix[3][0];
		matrix[3][0] = temp;

		line = 0;
		column = 1;
		temp = matrix[line][column];
		matrix[0][1] = matrix[1][3];
		matrix[1][3] = matrix[3][2];
		matrix[3][2] = matrix[2][0];
		matrix[2][0] = temp;

		line = 0;
		column = 2;
		temp = matrix[line][column];
		matrix[0][2] = matrix[2][3];
		matrix[2][3] = matrix[3][1];
		matrix[3][1] = matrix[1][0];
		matrix[1][0] = temp;

	i++;
	}
	return (*matrix);
}
