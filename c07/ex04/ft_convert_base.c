/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:02:19 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/29 14:02:45 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_sign(char *str);
int		base_index(char c, char *base);
int		ft_check_base(char *base);
int		ft_is_base(char c, char *str);
int		ft_strlen(char *str);

char	ft_diviseur(int nbr, int size, char *base)
{
	int i;

	size = 1;
	i = 1;
	if (nbr == 0)
		return (0);
	while (nbr / i > (ft_strlen(base) - 1))
	{
		i *= ft_strlen(base);
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base, char *itoa, int i)
{
	long nb;

	nb = nbr;
	if (ft_check_base(base) == 0)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		itoa[0] = '-';
	}
	if (nb >= ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base, itoa, i - 1);
	}
	printf("Coucou %c, %d\n", base[nb % ft_strlen(base)], i);
	itoa[i] = base[nb % ft_strlen(base)];
	//printf("%ld\n", nb);
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
		printf(" yoooooooo %ld \n", nbr);
	return ((int)nbr * ft_sign(str));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*itoa;
	int		size;
	int		minus;

	size = 0;
	minus = 1;
	number = ft_atoi_base(nbr, base_from);
	if (number < 0)
		minus = 2;
	size = ft_diviseur((number < 0 ? number * -1 : number), size, base_to);
	printf("je suis size %d et minus %d\n", size, minus);
	if (!(itoa = (char *)malloc(sizeof(char) * size + minus)))
		return (0);
	if (minus > 1)
		itoa[0] = '-';
	ft_putnbr_base(number, base_to, itoa, (size + minus - 2));
	itoa[size + minus - 1] = 0;
	return (itoa);
}

#include <stdio.h>

int main ()
{
	printf("cbase = s %s", ft_convert_base("80000000", "0123456789ABCDEF", "01"));
}