#include <stdio.h>

int 	check_row(int *board, int col)
{
	int i; 

	i = col - 1;
	while(--i >= 1)
		if(board[col - 1] == board[i])
			return 0;
	return (1);
}

int 	check_col(int **board, int row, int col)
{
	int i; 

	i = row - 1;
	while(--i >= 1)
		if(board[row][col] == board[i][col])
			return 0;
	return (1);
}

int main ()
{
	int **tab;

	printf("hola");
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 4; j++)
			{
				if(j == 0 || j == 5)
					tab[i][j] = 0;
				tab[i][j] = j;
			}
	printf("%d", check_col(tab, 4, 2));
}
