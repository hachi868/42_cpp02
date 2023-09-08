PROG := ex03

COMPILER := g++
FLAGS := -Wall -Wextra -Werror
FLAGS_ALT := -std=c++98
SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp

OBJS := $(SRCS:.cpp=.o)

$(PROG): $(OBJS)
	$(COMPILER) $(FLAGS) -o $@ $(OBJS)

all: $(PROG)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(PROG)

re:	fclean all

.PHONY:	all clean fclean re
