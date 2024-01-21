
CFLAGS = cc -Wall -Wextra -Werror -o
NAME = push_swap
SRC = push_swap.c \  

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	$(CFLAGS) $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
