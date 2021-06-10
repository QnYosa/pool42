/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:27:17 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/29 14:30:14 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_big_strlen(char **strs, int size)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (j <= size - 1)
	{
		i = 0;
		while (strs[j][i])
		{
			k++;
			i++;
		}
		j++;
	}
	return (k);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join_tab;
	int		i;
	int		j;
	int		k;

	if (!(join_tab = (char *)malloc(1 + (ft_big_strlen(strs, size) +
				(ft_strlen(sep) * size - 1)))))
		return (0);
	k = -1;
	j = -1;
	while (++j <= size - 1)
	{
		i = -1;
		while (strs[j][++i])
			join_tab[++k] = strs[j][i];
		i = -1;
		while (sep[++i] && j < size - 1)
			join_tab[++k] = sep[i];
	}
	join_tab[k + 1] = '\0';
	return (join_tab);
}
