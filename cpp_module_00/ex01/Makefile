NAME = phonebook
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

%.o: %.c
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
