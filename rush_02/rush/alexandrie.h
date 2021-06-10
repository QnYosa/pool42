/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alexandrie.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:25:46 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 17:25:37 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALEXANDRIE_H
# define ALEXANDRIE_H

# include "dict.h"

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_atoi_de_trois(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		ft_ischarset(char c, char *str);
void	ft_filler(char *o, int words, char *charset, char **split);
char	**ft_split(char *str);

int		is_space(char c);
char	*ft_strcpy(char *dest, char *src);
int		is_printable(char c);
int		error_found(int error_code);
int		ft_strlen(char *str);

size_t	get_buff_size(char *filename);
void	parse_line(char *line, t_dict *list);
char	*get_key(char *str);
char	*get_value(char *str);
t_dict	*init_list(char *number, char *suffixe, t_dict *dict);
void	print_list(t_dict *list);
t_dict	string_to_list(char *str);
char	*file_to_string(char *file_name);

#endif
