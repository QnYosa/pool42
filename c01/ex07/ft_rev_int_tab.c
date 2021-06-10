/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:54:36 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/16 10:39:04 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int n_tab[size];
	int j;

	j = 0;
	i = 0;
	while (i < size)
	{
		n_tab[i] = tab[i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		tab[j] = n_tab[i];
		j++;
		i--;
	}
}
