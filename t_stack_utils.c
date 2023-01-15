/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:44:09 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:44:11 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int num)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->num = num;
	node->idx = 0;
	node->next = 0;
	return (node);
}

t_stack	*ft_takenode(t_stack **stack)
{
	t_stack	*node;

	if (!*stack)
		return (0);
	node = *stack;
	if (node->next)
		*stack = node->next;
	else
		*stack = 0;
	node->next = 0;
	return (node);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*aux;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	aux = *stack;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = new;
	*stack = aux;
}

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (!new)
		return ;
	if (!stack)
	{
		*stack = new;
		return ;
	}
	new->next = *stack;
	*stack = new;
}

int	ft_isstack_sorted(t_stack *s)
{
	while (s->next)
	{
		if (s->num > s->next->num)
			return (0);
		s = s->next;
	}
	return (1);
}
