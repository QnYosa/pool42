/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:42:25 by dyoula            #+#    #+#             */
/*   Updated: 2021/03/20 10:38:41 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (dest[i] && i < size)
        i++;
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = 0;
    if (ft_strlen(dest) > size)
        return (ft_strlen(dest));
    return (ft_strlen(dest) + ft_strlen(src));
}
