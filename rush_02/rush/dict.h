/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyoula <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:33:15 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 17:36:21 by dyoula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DICT_H
# define __DICT_H

typedef struct s_dict	t_dict;

struct		s_dict
{
	char	*number;
	char	*suffixe;
	int		number_size;
	int		suffixe_size;
	t_dict	*next;
};

#endif
