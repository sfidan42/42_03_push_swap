/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bin_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:43:55 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:43:56 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_bin **bin)
{
	if (!(*bin)->b)
		return ;
	ft_stackadd_front(&(*bin)->a, ft_takenode(&(*bin)->b));
	ft_printf("pa\n");
}

void	ft_pb(t_bin **bin)
{
	if (!(*bin)->a)
		return ;
	ft_stackadd_front(&(*bin)->b, ft_takenode(&(*bin)->a));
	ft_printf("pb\n");
}

void	ft_ra(t_bin **bin)
{
	ft_stackadd_back(&(*bin)->a, ft_takenode(&(*bin)->a));
	ft_printf("ra\n");
}

void	ft_rb(t_bin **bin)
{
	ft_stackadd_back(&(*bin)->b, ft_takenode(&(*bin)->b));
	ft_printf("rb\n");
}

void	ft_rr(t_bin **bin)
{
	ft_ra(bin);
	ft_rb(bin);
	ft_printf("rr\n");
}
