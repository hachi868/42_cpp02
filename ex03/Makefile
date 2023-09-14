PROG := bsp

COMPILER := c++
FLAGS := -Wall -Wextra -Werror
FLAGS_ADD := -std=c++98
SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp

OBJS := $(SRCS:.cpp=.o)

%.o: %.cpp
	$(COMPILER) $(FLAGS) $(FLAGS_ADD) -c $< -o $@

$(PROG): $(OBJS)
	$(COMPILER) $(FLAGS) $(FLAGS_ADD) -o $@ $(OBJS)

all: $(PROG)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(PROG)

re:	fclean all

.PHONY:	all clean fclean re
