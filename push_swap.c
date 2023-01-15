/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:43:31 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:43:32 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	t_bin	*bin;

	if (c == 1)
		return (0);
	bin = ft_init(c - 1, v + 1);
	ft_sort(&bin);
	ft_stackclear(&bin->a);
	ft_stackclear(&bin->b);
	free(bin);
	return (0);
}
