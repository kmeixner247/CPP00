# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 12:10:02 by kmeixner          #+#    #+#              #
#    Updated: 2022/05/09 09:49:26 by kmeixner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account

SRCS		=	tests.cpp Account.cpp

CC			=	c++

RM			=	rm

CFLAGS		=	-std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all bonus clean fclean re