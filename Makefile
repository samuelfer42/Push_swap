NAME = push_swap

CHECKER = checker

INCLUDES = includes/

SRC = src/

FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

CC = gcc $(FLAGS)

FILES =  \
		utils/list.c utils/is_sort.c \
		utils/exit.c utils/wrmalloc.c \
		\
		little_algo.c parse.c \
		push_swap.c \


PS_FILES = push_swap.c 



PS_OBJ = $(addprefix $(SRC), $(PS_FILES))

PS_OBJS = $(PS_OBJ:.c=.o)

OBJ = $(addprefix $(SRC), $(FILES))

OBJS = $(OBJ:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PS_OBJS)
	@$(CC) $(OBJS) $(PS_OBJS) -o $@ -I$(INCLUDES)
	@printf "\n\e[36mpush\e[0m_\e[33mswap \e[92mis ready !\e[0m\e[?25h\n"


%.o: %.c $(INCLUDES)
	@$(CC) -o $@ -c $< -I$(INCLUDES)
	@printf "\e[?25l\e[JCreated \e[92m$(notdir $@)\e[0m\r"

clean:
	@$(RM) $(OBJS) $(PS_OBJS)
	@printf "All object files [\033[31mX\033[0m]\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(NAME) [\033[31mX\033[0m]\n"

slow: fclean
	

re : fclean all