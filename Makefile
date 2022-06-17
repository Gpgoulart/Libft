# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpecanha <gpecanha@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 18:49:27 by gpecanha          #+#    #+#              #
#    Updated: 2022/06/17 18:49:27 by gpecanha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS := -Wall -Wextra -Werror

SRCS=	$(wildcard *.c)

OBJS=		$(SRCS: .c=.o)

CC=			cc

RM=		rm -f
all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

norm:
	@norminette -R CheckForbiddenSourceHeader \
	$(function_files) $(bonus_files) *.h

re:			fclean all
.PHONY:		all clean fclean re		