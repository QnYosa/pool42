/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:54:13 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 17:37:25 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

size_t		get_buff_size(char *filename)
{
	char	buffer[1];
	int		rd;
	int		count;
	int		fd;

	count = 0;
	rd = 1;
	fd = open(filename, O_RDONLY);
	while ((rd = read(fd, buffer, 1)))
		count++;
	close(fd);
	return (count);
}

char		*get_key(char *str)
{
	int		x;
	char	*number;
	int		y;

	y = 0;
	x = 0;
	while (str[y] < 58 && str[y] > 47)
		y++;
	if (!(number = malloc(y * sizeof(char))))
		return (0);
	while (str[x] < 58 && str[x] > 47)
	{
		number[x] = str[x];
		x++;
	}
	while (is_space(str[x]))
		x++;
	if (str[x] != ':')
		return (0);
	return (number);
}

char		*get_value(char *str)
{
	int		x;
	int		length;
	char	*letters;

	x = 0;
	while (str[x] != ':')
		x++;
	x++;
	while (is_space(str[x]))
		x++;
	length = ft_strlen(&str[x]);
	letters = malloc(length * sizeof(char));
	letters = ft_strcpy(letters, &str[x]);
	return (letters);
}

t_dict		*init_list(char *number, char *suffixe, t_dict *dict)
{
	t_dict	*tmp;

	tmp = malloc(sizeof(t_dict));
	if (tmp)
	{
		tmp->number = number;
		tmp->suffixe = suffixe;
		tmp->number_size = ft_strlen(number);
		tmp->suffixe_size = ft_strlen(suffixe);
		tmp->next = dict;
	}
	return (tmp);
}

void		print_list(t_dict *list)
{
	while (list)
	{
		printf("number : %s -> suffixe : %s -> size : %i -> num size : %i\n", list->number, list->suffixe, list->suffixe_size, list->number_size);
		list = list->next;
	}
}

t_dict		string_to_list(char *str)
{
	char	**array;
	int		x;
	t_dict	*list;

	x = 0;
	array = ft_split(str);
	list = NULL;
	while (array[x])
	{
		if (get_key(array[x]) == 0 || get_value(array[x]) == 0)
		{
			list = NULL;
			return (*list);
		}
		list = init_list(get_key(array[x]), get_value(array[x]), list);
		x++;
	}
	return (*list);
}

char		*file_to_string(char *file_name)
{
	int		fd;
	int		buff_size;
	char	*buffer;
	int		rd;

	buff_size = get_buff_size("./numbers.dict");
	fd = open("./numbers.dict", O_RDONLY);
	buffer = malloc(buff_size * sizeof(char));
	rd = read(fd, buffer, buff_size);
	buffer[buff_size] = '\0';
	return (buffer);
}

/*
** char *search_for_number(t_dict *dict, char *number)
** {
** 	t_dict *searcher;
** 	searcher = dict;
** 	while ()
** }
*/
