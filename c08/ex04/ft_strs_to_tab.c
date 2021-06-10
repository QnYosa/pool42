/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:06:43 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/30 10:57:59 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int					i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int					i;
	char				*allocated_tab;

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

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	if (!(tab = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
