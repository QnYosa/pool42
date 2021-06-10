/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:53:10 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/20 16:06:46 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = -1;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i] = '\0';
	return (dest);
}
