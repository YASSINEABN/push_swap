
CFLAGS = cc -Wall -Wextra -Werror -fsanitize=address
NAME = push_swap
SRC  = push_swap.c \
    actions/applyactions.c actions/init_coords_stack_b.c \
    actions/make_stack_a.c actions/make_stack_b.c \
    actions/push_a.c actions/push_b.c \
    actions/revrot_stack.c actions/rotate_stack_both.c \
    actions/rotate_stack.c actions/rotate_stack_large.c \
    actions/rotate_tmp.c actions/sorted_five_elements.c \
    actions/sorted_list_three.c actions/swap_stack.c \
    utils/check_coords.c utils/check_last_node.c \
    utils/check_list_value.c utils/check_max.c \
    utils/check_min.c utils/check_value.c \
    utils/do_something.c utils/find_best_move.c \
    utils/first_push.c utils/ft_list_new.c \
    utils/init_coords_stack_a.c utils/init_svm.c \
    utils/last_node.c utils/max_list.c \
    utils/min_list.c utils/pos.c \
    utils/pos_list.c utils/push_item.c \
    utils/push_max.c utils/size.c \
    utils/sorted_array.c utils/sorted_list.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	$(CFLAGS) -o $(NAME)  $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
