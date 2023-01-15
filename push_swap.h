/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:43:41 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:43:42 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	int				idx;
	struct s_stack	*next;
}					t_stack;

typedef struct s_bin
{
	t_stack		*a;
	t_stack		*b;
}				t_bin;

// t_stack utils:
t_stack	*ft_stacknew(int num);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
int		ft_isstack_sorted(t_stack *s);
void	ft_stackiter(t_stack *stack, void (*f1)(void *), void (*f2)(void *));
t_stack	*ft_takenode(t_stack **stack);
void	ft_stackclear(t_stack **stack);
int		ft_stacklearn(t_stack *stack, int nth);
int		ft_stacksize(t_stack *stack);
int		ft_stackmin(t_stack *stack);
t_stack	*ft_stackidx(t_stack *stack);

// operations (t_bin utils):
void	ft_sa(t_bin **bin);
void	ft_sb(t_bin **bin);
void	ft_ss(t_bin **bin);
void	ft_pa(t_bin **bin);
void	ft_pb(t_bin **bin);
void	ft_ra(t_bin **bin);
void	ft_rb(t_bin **bin);
void	ft_rr(t_bin **bin);
void	ft_rra(t_bin **bin);
void	ft_rrb(t_bin **bin);
void	ft_rrr(t_bin **bin);

// if params are correct return the bin: 
t_bin	*ft_init(int n, char **params);

// checking_parameters
char	***ft_create_silo(int n, char **params);
void	ft_loop_and_check(char ***_silo);
void	ft_free_silo(char ***silo);

// checking_parameters_utils
int		ft_doub(char ***p, char *w);
int		ft_nan(char *w);
int		ft_lim(char *w);

// sorting utils:
void	ft_sort(t_bin **bin);
void	ft_sort_two(t_bin **bin);
void	ft_sort_three(t_bin **bin);
void	ft_sort_four(t_bin **bin);
void	ft_sort_five(t_bin **bin);
void	ft_sort_complex(t_bin **bin);

#endif
