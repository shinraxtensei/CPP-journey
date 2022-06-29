# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 09:21:10 by ahouari           #+#    #+#              #
#    Updated: 2022/06/26 09:21:11 by ahouari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ScavTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^
	@printf "\n\t\033[1;34mCompilation successful\033[0m\n\n"

clean:
	@rm -f $(OBJS) 

fclean:
	@rm -f $(NAME) $(OBJS) 

re : fclean all

.PHONY: all clean fclean re