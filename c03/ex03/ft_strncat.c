/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 09:58:32 by dyoula            #+#    #+#             */
/*   Updated: 2021/02/22 14:22:19 by dyoula           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
