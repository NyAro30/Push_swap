NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

SRCS = create_node.c\
       free_stack.c\
       ft_atoi.c\
       ft_isdi.c\
       ft_split_mod.c\
       is_duplicate.c\
       push_swap.c\
       free_split.c\
       ft_substr.c\
       ft_lstadd_back.c\
       calculate_disorder.c\
       stack_size.c\
       assign_index.c\
       find_min_position.c\
       find_max_position.c\
       bring_to_top.c\
       simple_sort.c\
       count_chunk.c\
       is_in_chunk.c\
       find_in_chunk.c\
       medium_sort.c\
		count_bytes.c\
       get_bits.c\
       process_bits.c\
       complexe_sort.c\
       adaptive_sort.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

 $(NAME) : $(OBJS)
    $(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
    $(CC) $(FLAGS) -c $< -o $@

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re