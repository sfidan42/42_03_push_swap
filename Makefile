src		=	ft_init.c ft_sort.c ft_sort_complex.c \
			ft_check_params.c ft_check_params_utils.c \
			t_stack_utils.c t_stack_utils2.c t_stack_utils3.c \
			t_bin_utils.c t_bin_utils2.c t_bin_utils3.c
obj		=	$(src:.c=.o)
NAME	=	push_swap.a
NAME2	=	libft/libft.a
NAME3	=	ft_printf/libftprintf.a
flags	=	-Werror -Wextra -Wall

all: $(NAME2) $(NAME3) $(NAME) c

$(NAME): $(src)
	gcc -c $(flags) $(src)
	ar rcs $(NAME) $(obj)

$(NAME2):
	@make -C libft

$(NAME3):
	@make -C ft_printf

c: push_swap

push_swap: push_swap.c
	gcc $(flags) push_swap.c $(NAME) $(NAME2) $(NAME3) -o push_swap

clean:
	make -C libft clean
	@make -C ft_printf clean
	@rm -f $(obj)

fclean: clean
	rm -f $(NAME2) $(NAME3) $(NAME) push_swap

re: fclean all

.PHONY: all clean fclean re
