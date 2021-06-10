/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:24:09 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/25 10:46:01 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sign(char *str)
{
	int sign;
	int i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int		ft_is_base(char c, char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

int		base_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		divider;
	int		sign;
	long	nbr;

	sign = 1;
	i = 0;
	nbr = 0;
	divider = 0;
	if (!base)
		return (0);
	while (base[divider])
		divider++;
	if ((ft_check_base(base) == 0))
		return (nbr);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_is_base(str[i], base))
	{
		nbr = nbr * divider + (base_index(str[i], base));
		i++;
	}
	return ((int)nbr * ft_sign(str));
}
