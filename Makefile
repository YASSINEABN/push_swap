
CFLAGS = cc  -Wall -Werror -Wextra -fsanitize=address
NAME = push_swap
SRC  = push_swap.c \
    actions/applyactions.c actions/init_coords_stack_b.c \
    actions/make_stack_a.c actions/make_stack_b.c \
    actions/rotate_tmp.c actions/sorted_five_elements.c \
    actions/sorted_list_three.c actions/pa.c \
    actions/pb.c actions/ra.c actions/rra.c \
    actions/rrb.c actions/sa.c actions/rb.c \
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
    utils/sorted_array.c utils/sorted_list.c \
    utils/handles_error.c \
    utils/init_stack_a.c utils/ft_split.c utils/ft_isdigit.c \
    actions/sort_stacks.c actions/rr.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	$(CFLAGS) -o $(NAME)  $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all