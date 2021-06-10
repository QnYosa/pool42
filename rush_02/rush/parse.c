/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 09:17:47 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 17:22:05 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

int		parse_master(unsigned long long i)
{
	int size;

	size = 0;
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

int		parse_three(unsigned long long i)
{
	int size;
	int thousands;

	thousands = parse_master(i);
}
