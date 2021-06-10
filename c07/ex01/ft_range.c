/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:27:40 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/24 15:10:59 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *new_tab;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	new_tab = (int *)malloc(sizeof(int) * (max - min));
	if (new_tab == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (j < max - min)
	{
		new_tab[j] = i;
		i++;
		j++;
	}
	return (new_tab);
}
