# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 16:46:21 by ahouari           #+#    #+#              #
#    Updated: 2022/06/11 16:46:21 by ahouari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^
	@printf "\n\t\033[1;34mCompilation successful\033[0m\n\n"

clean:
	@rm -f $(OBJS) *.replace

fclean:
	@rm -f $(NAME) $(OBJS) *.replace

re : fclean all

.PHONY: all clean fclean re