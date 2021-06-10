/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:58:26 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/24 13:34:08 by dyoula           ###   ########.fr       */
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
	(void)argc;
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
