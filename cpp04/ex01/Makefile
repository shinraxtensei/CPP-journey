NAME = animals
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = c++

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "Compiled $(NAME)\n"

%.o:%.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned"

fclean: clean
	@$(RM) $(NAME)

re: fclean all
