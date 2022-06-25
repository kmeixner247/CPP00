# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 12:10:02 by kmeixner          #+#    #+#              #
#    Updated: 2022/06/25 13:58:49 by kmeixner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account

SRCS		=	tests.cpp Account.cpp

CC			=	c++

RM			=	rm

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re