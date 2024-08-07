NAME = ZombieHorde

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Zombie.cpp  main.cpp ZombieHorde.cpp

OBJECTS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean bonus re