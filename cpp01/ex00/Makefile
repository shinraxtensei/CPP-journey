NAME = zombie

SRCS = main.cpp Zombie.cpp 

OBJS  = $(SRCS:.cpp=.o)

CFLAGS  = -Wall -Wextra -Werror -std=c++98

all : $(NAME)


$(NAME) : $(OBJS)
	c++ $(CFLAGS) $(SRCS) -o $@

clean :
	rm -f $(OBJS)
fclean :
	rm -f $(NAME) $(OBJS)

re : fclean all

.PHONY : all clean fclean re