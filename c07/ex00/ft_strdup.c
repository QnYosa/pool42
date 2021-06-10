/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:27:49 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/25 11:44:32 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*allocated_tab;

	i = 0;
	if (!(allocated_tab = (char *)malloc(ft_strlen(src) * sizeof(src) + 1)))
		return (0);
	while (src[i])
	{
		allocated_tab[i] = src[i];
		i++;
	}
	allocated_tab[i] = '\0';
	return (allocated_tab);
}
