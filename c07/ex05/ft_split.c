/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:59:49 by dyoula            #+#    #+#             */
/*   Updated: 2021/05/28 15:57:42 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ischarset(char c, char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

void	ft_filler(char *o, int words, char *charset, char **split)
{
	int i;
	int j;
	int pos;

	i = -1;
	pos = 0;
	while (++i < words)
	{
		j = 0;
		while (!(ft_ischarset(o[j], charset)) && o[j])
			j++;
		if (!(split[i] = (char *)malloc(sizeof(char) * (j + 1))))
			return ;
		j = 0;
		while (!(ft_ischarset(o[pos], charset)) && o[pos])
		{
			split[i][j++] = o[pos++];
			
		}
		split[i][j] = 0;
		while (ft_ischarset(o[pos], charset) && o[pos])
			pos++;
	}
	if (!(split[i] = (char *)malloc(sizeof(char) * 1)))
		return ;
	split[i][0] = '\0';
	return ;
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	int		letters;
	char	**split;
	char	*o;

	words = 1;
	letters = 0;
	while (ft_ischarset(*str, charset) != 0 && str)
		str++;
	o = str;
	while (*str++)
	{
		if (ft_ischarset(*str, charset) == 0)
			letters++;
		if (ft_ischarset(*str, charset) == 1
		&& ft_ischarset(str[1], charset) == 0)
			words++; 
	}
	if (!(split = (char **)malloc(sizeof(char) * (words + letters))))
		return (0);
	ft_filler(o, words, charset, split);
	return (split);
}

int		main()
{
	char	str[] = "uuuuu";
	char	charset[] = "u";
	ft_split(str, charset);
}
/*


#include "libft.h"

void	ft_filler(char *o, int words, char c, char **split)
{
	int i;
	int j;
	int pos;

	i = -1;
	pos = 0;
	while (++i < words)
	{
		j = 0;
		while (o[j] == c && o[j])
			j++;
		if (!(split[i] = (char *)malloc(sizeof(char) * (j + 1))))
			return ;
		j = 0;
		while (o[pos] != c && o[pos])
		{
			split[i][j++] = o[pos++];
		}
		split[i][j] = 0;
		while (o[pos] == c && o[pos])
			pos++;
	}
	if (!(split[i] = (char *)malloc(sizeof(char) * 1)))
		return ;
	split[i][0] = '\0';
	return ;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		letters;
	char	**split;
	char	*o;

	words = 1;
	letters = 0;
	while (*s == c)
		s++;
	o = (char *)s;
	while (*s++)
	{
		if (*s != c)
			letters++;
		if (*s == c && s[1] != c)
			words++; 
	}
	if (!(split = (char **)malloc(sizeof(char) * (words + letters))))
		return (0);
	ft_filler(o, words, c, split);
	return (split);
}
*/