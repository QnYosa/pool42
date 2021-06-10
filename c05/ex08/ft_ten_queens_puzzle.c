/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:28:44 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/23 15:48:46 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int board[10][10])
{
	int		row;
	int		col;
	char	queen;

	col = -1;
	while (++col <= 9)
	{
		row = -1;
		while (++row <= 9)
		{
			if (board[row][col] == 1)
			{
				queen = row + 48;
				write(1, &queen, 1);
			}
		}
	}
}

int		ta_bom(int board[10][10], int row, int col)
{
	int i;
	int j;

	i = -1;
	while (++i < col)
		if (board[row][i] == 1)
			return (0);
	i = row;
	j = col;
	while (--i >= 0 && --j >= 0)
		if (board[i][j] == 1)
			return (0);
	i = row;
	j = col;
	while (--j >= 0 && ++i <= 9)
		if (board[i][j] == 1)
			return (0);
	return (1);
}

void	ft_solver(int board[10][10], int col, int *soluce)
{
	int i;

	if (col > 9)
	{
		ft_display(board);
		write(1, "\n", 1);
		(*soluce)++;
	}
	else
	{
		i = -1;
		while (++i <= 9)
		{
			if (ta_bom(board, i, col) == 1)
			{
				board[i][col] = 1;
				ft_solver(board, col + 1, soluce);
				board[i][col] = 0;
			}
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int soluce;
	int i;
	int j;

	i = -1;
	while (++i <= 9)
	{
		j = -1;
		while (++j <= 9)
		{
			board[i][j] = 0;
		}
	}
	soluce = 0;
	ft_solver(board, 0, &soluce);
	return (soluce);
}
