/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:44:15 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:44:15 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackdelone(t_stack *stack)
{
	if (!stack)
		return ;
	free(stack);
}

void	ft_stackclear(t_stack **stack)
{
	t_stack	*aux;

	if (!stack)
		return ;
	while (*stack)
	{
		aux = (*stack)->next;
		ft_stackdelone(*stack);
		*stack = aux;
	}
	*stack = 0;
}

void	ft_stackiter(t_stack *stack, void (*f1)(void *), void (*f2)(void *))
{
	t_stack	*aux;

	if (!stack || !f1 || !f2)
		return ;
	aux = stack;
	while (stack)
	{
		f1(&stack->num);
		stack = stack->next;
	}
	ft_char('\n');
	stack = aux;
	while (stack)
	{
		f2(&stack->idx);
		stack = stack->next;
	}
}

int	ft_idxhelp(t_stack *top, int num)
{
	if (!top)
		return (0);
	return ((top->num < num) + ft_idxhelp(top->next, num));
}

t_stack	*ft_stackidx(t_stack *stack)
{
	t_stack	*top;

	top = stack;
	while (stack)
	{
		stack->idx = ft_idxhelp(top, stack->num);
		stack = stack->next;
	}
	return (top);
}
