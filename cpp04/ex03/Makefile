NAME = interfaces
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = c++

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "Compilation successful\n"

%.o:%.cpp 	
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned"

fclean: clean
	@$(RM) $(NAME)

re: fclean all
