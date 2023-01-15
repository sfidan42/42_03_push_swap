/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bin_utils3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:44:00 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:44:01 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr_(t_stack **stack)
{
	t_stack	*last;
	t_stack	*prev;

	prev = *stack;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = 0;
	ft_stackadd_front(stack, ft_takenode(&last));
}

void	ft_rra(t_bin **bin)
{
	ft_rr_(&(*bin)->a);
	ft_printf("rra\n");
}

void	ft_rrb(t_bin **bin)
{
	ft_rr_(&(*bin)->b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_bin **bin)
{
	ft_rr_(&(*bin)->a);
	ft_rr_(&(*bin)->b);
	ft_printf("rrr\n");
}
