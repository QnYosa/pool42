# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyoula <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 13:35:48 by dyoula            #+#    #+#              #
#    Updated: 2021/04/01 13:49:44 by dyoula           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	=  ft_putchar.c ft_putstr.c  ft_strcmp.c  ft_strlen.c  ft_swap.c
INDIR 	= includes/
OBJS 	= ${SRCS:.c=.o}
FLAGS 	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
.c.o:	$(SRCS)
	gcc $(FLAGS) -I $(INDIR) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re