/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 04:34:17 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 17:11:22 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

int		is_space(char c)
{
	if (c == '\t' || c == '\n' ||
	c == '\v' || c == '\f' ||
	c == '\r' || c == ' ')
		return (1);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (!is_printable(src[i]))
			return (0);
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_printable(char c)
{
	if (c < 32 && c > 126)
		return (0);
	return (1);
}
