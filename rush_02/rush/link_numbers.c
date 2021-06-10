/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:37:04 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 17:51:05 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*hundred(char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 4)))
		return (NULL);
	str[0] = c;
	str[1] = '0';
	str[2] = '0';
	str[4] = 0;
	return (str);
}

char	*dizaine(char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 3)))
		return (NULL);
	str[0] = c;
	str[1] = '0';
	str[2] = 0;
	return (str);
}

char	*unite(char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = c;
	str[1] = '0';
	return (str);
}

char	*casselescouilles(char c, char d)
{
	char *str;

	if (c == '1' && (d >= '0' && d <= '9'))
	{
		if (!(str = malloc(sizeof(char) * 3)))
			return (NULL);
		str[0] = c;
		str[1] = d;
		str[3] = 0;
	}
	return (str);
}
