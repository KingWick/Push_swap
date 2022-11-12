NAME = push_swap

INCLUDE = includes/ 

FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

OBJS  = ${SRCS:.c=.o}

SRCS = srcs/main.c \
	   srcs/mouv.c \
	   srcs/pile.c

%.o:%.c
	@gcc $(FLAGS) -I $(INCLUDE) -c $< -o $@
	@printf "\e[?25l\e[JCreated \e[92m$(notdir $@)\e[0m\r"

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) -o $(NAME) $(OBJS) -L $(INCLUDE)
	@printf "\n\e[36msuccessfully\e[0m_\e[33m compiled \e[92mis ready !\e[0m\e[?25h\n"

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)
re: fclean all