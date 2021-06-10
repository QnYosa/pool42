#include <stdlib.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		taille(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return ((i + 1) / 2);
}

int		ft_init_tab(char *argv)
{
	int size_tab;
	int **board;
	int i;
	size_tab = (ft_sqrt(taille(argv)) + 2);

	size_tab *= size_tab;
	if(!(board =(int *)malloc(sizeof(int) * size_tab)))
		return(0);
	size_tab /= (ft_sqrt(size_tab));
	i = -1;
	while(++i < size_tab)
	{
		if(!(board[i] = (int *)malloc(sizeof(int) * size_tab)))
			return (0);
	}
	ft_backtrack(board, 1, 2, size_tab - 1);
}
