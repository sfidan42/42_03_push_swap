/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_params_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:21:38 by sfidan            #+#    #+#             */
/*   Updated: 2023/01/03 14:21:39 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_doub(char ***p, char *w)
{
	int	c;
	int	i;
	int	j;

	c = 0;
	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
			c += ft_atoi(p[i][j++]) == ft_atoi(w);
		i++;
	}
	return (c != 1);
}

int	ft_nan(char *w)
{
	int	i;

	if (w[0] != '-' && w[0] != '+' && !ft_isdigit(w[0]))
		return (1);
	if ((w[0] == '-' || w[0] == '+') && !w[1])
		return (1);
	i = 1;
	while (w[i])
	{
		if (!ft_isdigit(w[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_lim(char *w)
{
	return (ft_strncmp(w, "-1", 2) && ft_atoi(w) == -1);
}
