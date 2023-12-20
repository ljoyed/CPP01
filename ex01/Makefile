NAME = horde

CXX = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address

RM = rm -rf

SRCS = 	main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all clean