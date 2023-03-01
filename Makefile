# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 16:16:10 by diosanto          #+#    #+#              #
#    Updated: 2023/03/01 17:08:19 by diosanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

SRCS	=	checkers.c 						\
			list_builder.c					\
			push_swap.c						\
			push.c							\
			r_rotate.c						\
			rotate.c						\
			swaps.c							\
			42_diosanto_libft/ft_lstadd_front.c

OBJS	= $(SRCS:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re