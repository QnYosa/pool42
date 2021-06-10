/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:40:42 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/24 13:40:52 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int *tab;
	int result;

	result = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (result))))
		return (-1);
	j = 0;
	while (j < result)
	{
		tab[j] = min;
		min++;
		j++;
	}
	*range = tab;
	return (j);
}
