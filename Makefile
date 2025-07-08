NAME = push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror -g # <- delete
DEPS = push_swap.h
SRCS = main.c cli_to_stack/cli_to_stack.c operations/operations_I.c operations/operations_II.c operations/operations_utils.c cli_to_stack/split.c algorithm/algo_radix.c operations/sorting.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

