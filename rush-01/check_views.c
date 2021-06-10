
int 	check_min_rows(int **board, int col, int row)
{
	int i;
	int highest;
	int counter;

	highest = board[row][1];
	i = 0;
	counter = 1;
	while(++i < col)
		if(board[row][i] > board[row][i + 1])
		{
			highest = board[row][i + 1];
			counter++;
		}
	return (counter == board[row][0] ? 1 : 0);
}

int		check_max_rows(int **board, int col, int row)
{
	int i;
	int highest;
	int counter;

	highest = board[row][1];
	i = col + 1;
	counter = 1;
	while(--i < 1)
		if(board[row][i] > board[row][i - 1])
		{
			highest = board[row][i - 1];
			counter++;
		}
	return (counter == board[row][col + 1] ? 1 : 0);
}

int 	check_min_cols(int **board, int col, int row)
{
	int i;
	int highest;
	int counter;

	highest = board[1][col];
	i = 0;
	counter = 1;
	while(++i < row)
		if(board[i][col] > board[i + 1][col])
		{
			highest = board[i + 1][col];
			counter++;
		}
	return (counter == board[0][col] ? 1 : 0);
}

int 	check_max_cols(int **board, int col, int row)
{
	int i;
	int highest;
	int counter;

	highest = board[1][col];
	i = row + 1;
	counter = 1;
	while(--i < 1)
		if(board[i][col] > board[i - 1][col])
		{
			highest = board[i - 1][col];
			counter++;
		}
	return (counter == board[row + 1][col] ? 1 : 0);
}
