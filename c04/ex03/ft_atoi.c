/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:24:09 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/23 10:12:31 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sign(char *str, int nbr)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 45)
			nbr = nbr * (-1);
		i++;
	}
	return (nbr);
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	nbr = ft_sign(str, nbr);
	return (nbr);
}
