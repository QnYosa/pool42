/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:12:07 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/20 10:28:29 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar("\\");
			base(str[i]);
		}
		else
			write(1, &str[i], 1);
	}
}
