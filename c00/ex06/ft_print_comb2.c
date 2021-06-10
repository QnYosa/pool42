/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:18:08 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/15 16:19:05 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ghost_writer(int o, int i, int j, char c)
{
	o = c + i / 10;
	write(1, &o, 1);
	o = c + i % 10;
	write(1, &o, 1);
	write(1, " ", 1);
	o = c + j / 10;
	write(1, &o, 1);
	o = c + j % 10;
	write(1, &o, 1);
	if (i != 98)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c;
	int		o;

	o = 0;
	i = 0;
	c = '0';
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_ghost_writer(o, i, j, c);
			j++;
		}
		i++;
	}
}
