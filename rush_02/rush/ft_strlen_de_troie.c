/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_strlen_de_troie.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:28:24 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 17:30:10 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <alexandrie.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int		ft_atoi_de_troie(char *str)
{
	int j;
	int result;

	j = 0;
	result = 0;
	while (*str < 33 || *str > 126)
		(str)++;
	while (*str >= '0' && *str <= '9')
	{
		if (j == 3)
			return (result);
		result = result * 10 + (*str - 48);
		(str)++;
		j++;
	}
	return (result);
}

int		limite_de_troie(char *str)
{
	int i;
	int peage;
	int douane;

	i = 0;
	peage = 0;
	douane = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			peage++;
		if (!(peage % 3) && peage != 0)
		{
			douane++;
			peage = 0;
		}
		i++;
	}
	return (douane - 1);
}
