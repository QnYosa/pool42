/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:31:20 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/13 10:23:59 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		obtain_diviseur_de_nb(int nb, int i)
{
	while (nb / i > 9)
		i = i * 10;
	return (i);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	chiffre;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	chiffre = '0';
	i = 1;
	i = obtain_diviseur_de_nb(nb, i);
	while (i >= 1 && nb != -2147483648)
	{
		chiffre = nb / i + '0';
		write(1, &chiffre, 1);
		nb = nb % i;
		i = i / 10;
	}
}
