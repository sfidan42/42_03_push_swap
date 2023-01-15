/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:41:54 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:41:57 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bin	*ft_create_bin(char ***silo)
{
	char	**list;
	t_bin	*bin;

	bin = malloc(sizeof(bin));
	while (*silo)
	{
		list = *silo++;
		while (*list)
			ft_stackadd_back(&bin->a, ft_stacknew(ft_atoi(*list++)));
	}
	return (bin);
}

t_bin	*ft_init(int n, char **params)
{
	char	***silo;
	t_bin	*bin;

	silo = ft_create_silo(n, params);
	ft_loop_and_check(silo);
	bin = ft_create_bin(silo);
	ft_free_silo(silo);
	return (bin);
}
