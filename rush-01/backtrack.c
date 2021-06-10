int		ft_backtrack(int **board, int row, int col, int size_tab)
{
	if(col < size_tab)
		ft_backtrack_bis(board, row, col);
	else if (row < size_tab)
	{
		if(check_row(board[row], col))
			ft_backtrack(**board, row + 1, 1);
	}
	else
	{
		if(check_row(board[row], col))
			ft_display(board[size_tab][size_tab]);
	}
}

int 	ft_backtrack_bis(**tab, int row, int col, int size_tab)
{
	int i;

	i = 1;
	while(i < size_tab)
	{
		tab[row][col] = i;
		if
	}
}

int		solver(int **grid, int **view, int position)
{
    int                i;
    int                j;
    int                k;

    if (not_valid_row(grid, view) || not_valid_col(grid, view))
        return (0);
    if (position == N * N)
        return (1);
    i = position / N;
    j = position % N;
    k = 1;
    while (k < N + 1)
    {
        if (not_in_row(grid, i, k) && not_in_col(grid, j, k))
        {
            grid[i][j] = k;
            if (solver(grid, view, position + 1))
                return (1);
        }
        k++;
    }
    grid[i][j] = 0;
    return (0);
}