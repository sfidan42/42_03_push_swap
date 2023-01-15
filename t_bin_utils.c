/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bin_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:43:50 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:43:51 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_s(t_stack **stack)
{
	ft_stackadd_front(stack, ft_takenode(&(*stack)->next));
}

void	ft_sa(t_bin **bin)
{
	ft_s(&(*bin)->a);
	ft_printf("sa\n");
}

void	ft_sb(t_bin **bin)
{
	ft_s(&(*bin)->b);
	ft_printf("sb\n");
}

void	ft_ss(t_bin **bin)
{
	ft_s(&(*bin)->a);
	ft_s(&(*bin)->b);
	ft_printf("ss\n");
}
