/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_utils3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:44:21 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:44:21 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	ft_stacklearn(t_stack *stack, int nth)
{
	while (nth--)
		stack = stack->next;
	return (stack->num);
}

int	ft_stacksize(t_stack *stack)
{
	if (!stack)
		return (0);
	return (1 + ft_stacksize(stack->next));
}

int	ft_stackmin(t_stack *stack)
{
	int	num;

	num = stack->num;
	while (stack)
	{
		if (stack->num < num)
			return (0);
		stack = stack->next;
	}
	return (1);
}
