# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 12:10:02 by kmeixner          #+#    #+#              #
#    Updated: 2022/06/25 10:37:49 by kmeixner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

CC			=	c++

RM			=	rm

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all bonus clean fclean re