/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:46:43 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/21 14:17:47 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_error(void)
{
	write(1, "error", 5);
	write(1, "\n", 1);
}

int ft_check_params(char *argv[])
{
	int i;

	i = 0;
	while (argv[1][i++])
	{
		if (i % 2 == 0 && (argv[1][i] < '0' || argv[1][0] > '9'))
		{
			ft_print_error();
			return (0);
		}
		if (i % 2 != 0 && (argv[1][i] != ' ' && argv[1][i] != 0))
		{
			ft_print_error();
			return (0);
		}
	}
	return (1);
}


int main(int argc, char *argv[])
{
	if (argc != 2)
		ft_print_error();
	else
	{
		if (ft_check_params(argv) == 0)
			return (0);
		ft_init_tab(argv[1]);
	}
	return (0);
}