/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:43:00 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:43:01 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_bin **bin)
{
	if ((*bin)->a->num > (*bin)->a->next->num)
		ft_sa(bin);
}

void	ft_sort_three(t_bin **bin)
{
	t_stack	*a;

	a = (*bin)->a;
	if (ft_stacklearn(a, 0) < ft_stacklearn(a, 1))
		if (ft_stacklearn(a, 1) < ft_stacklearn(a, 2))
			return ;
	else if (ft_stacklearn(a, 0) > ft_stacklearn(a, 2))
		ft_rra(bin);
	else
	{
		ft_ra(bin);
		ft_sa(bin);
		ft_rra(bin);
	}
	else if (ft_stacklearn(a, 2) < ft_stacklearn(a, 1))
	{
		ft_sa(bin);
		ft_rra(bin);
	}
	else if (ft_stacklearn(a, 0) < ft_stacklearn(a, 2))
		ft_sa(bin);
	else
		ft_ra(bin);
}

void	ft_sort_four(t_bin **bin)
{
	while (!ft_stackmin((*bin)->a))
	{
		ft_ra(bin);
		if (ft_isstack_sorted((*bin)->a))
			return ;
	}
	ft_pb(bin);
	ft_sort_three(bin);
	ft_pa(bin);
}

void	ft_sort(t_bin **bin)
{
	int		size;

	size = ft_stacksize((*bin)->a);
	if (size == 1)
		return ;
	if (ft_isstack_sorted((*bin)->a))
		return ;
	if (size == 2)
		ft_sort_two(bin);
	else if (size == 3)
		ft_sort_three(bin);
	else if (size == 4)
		ft_sort_four(bin);
	else
		ft_sort_complex(bin);
}
