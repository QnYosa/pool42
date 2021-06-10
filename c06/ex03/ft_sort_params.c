/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 09:33:49 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/23 17:11:27 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	final(int argc, char **tab)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}

void	ft_swap(char **tab, char **tab2)
{
	char *swapa;

	swapa = *tab;
	*tab = *tab2;
	*tab2 = swapa;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;
	int		j;

	j = 1;
	while (j)
	{
		j = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				j = 1;
			}
		}
	}
	i = 0;
	final(argc, argv);
	return (0);
}
