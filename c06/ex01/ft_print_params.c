/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:59:33 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/23 17:15:22 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *p)
{
	int i;

	i = 0;
	while (*p)
	{
		write(1, &p[i++], 1);
		if (p[i] == '\0')
			break ;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);
}
