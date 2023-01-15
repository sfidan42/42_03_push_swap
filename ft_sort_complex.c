/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_complex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:42:50 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:42:52 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_numofdigits(int nbr)
{
	if (!nbr)
		return (0);
	return (1 + ft_numofdigits(nbr / 2));
}

void	ft_sort_complex(t_bin **bin)
{
	int	size;
	int	len;
	int	weight;

	(*bin)->a = ft_stackidx((*bin)->a);
	len = ft_numofdigits(ft_stacksize((*bin)->a));
	weight = 1;
	while (len--)
	{
		size = ft_stacksize((*bin)->a);
		while (size--)
		{
			if ((*bin)->a->idx / weight % 2)
				ft_ra(bin);
			else
				ft_pb(bin);
		}
		size = ft_stacksize((*bin)->b);
		while (size--)
			ft_pa(bin);
		weight *= 2;
	}
}
