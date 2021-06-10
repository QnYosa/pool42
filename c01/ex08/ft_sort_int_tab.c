/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 09:18:50 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/14 08:47:04 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *tab, int i, int j)
{
	int t_tab;

	t_tab = tab[i];
	tab[i] = tab[j];
	tab[j] = t_tab;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab, i, j);
			i = 0;
		}
		else
			i++;
	}
}
