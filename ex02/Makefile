CC = c++
RM = rm -f
C++FLAGS = -Wall -Wextra -Werror
C++STDFLAGS= -std=c++98
INCLUDES_DIR = ./includes/
INCLUDES = ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp
INCLUDES_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
NAME = fragtrap
SRCS_DIR = ./srcs/
SRCS = ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		main.cpp
SRCS_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(SRCS:.cpp=.o)

%.o: %.c
	${CC} -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH} $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		c++ -o $(NAME) $(OBJS)

$(OBJS): $(SRCS_PATH)
	c++ -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH}

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean re all clean