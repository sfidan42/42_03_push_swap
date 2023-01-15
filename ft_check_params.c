/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:21:48 by sfidan            #+#    #+#             */
/*   Updated: 2023/01/03 14:21:49 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	***ft_create_silo(int n, char **params)
{
	int		i;
	char	***silo;

	silo = malloc(n * sizeof(char **) + 1);
	i = 0;
	while (i < n)
		silo[i++] = ft_split(*params++, ' ');
	silo[i] = 0;
	return (silo);
}

void	ft_error(char ***s)
{
	ft_free_silo(s);
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_loop_and_check(char ***s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		if (!*s[i])
			ft_error(s);
		j = 0;
		while (s[i][j])
		{
			if (ft_doub(s, s[i][j]) || ft_nan(s[i][j]) || ft_lim(s[i][j]))
				ft_error(s);
			j++;
		}
		i++;
	}
}

void	ft_free_silo(char ***silo)
{
	int	i;
	int	j;

	i = 0;
	while (silo[i])
	{
		j = 0;
		while (silo[i][j])
		{
			free(silo[i][j]);
			j++;
		}
		free(silo[i]);
		i++;
	}
	free(silo);
}
