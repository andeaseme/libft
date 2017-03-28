/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option128.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 23:57:01 by aphan             #+#    #+#             */
/*   Updated: 2017/03/29 21:09:22 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_option128(int ac, char **av)
{
	int		i;
	int		j;
	int		*op;

	i = 0;
	op = (int *)malloc(sizeof(int) * 5);
	while (i < 4)
		op[i++] = 0;
	if (ac > 1 && op)
	{
		i = 0;
		while (++i < ac && av[i][0] == '-' && av[i][1])
		{
			j = 1;
			while (av[i][j] > 0 && av[i][j] <= 127)
				SETBIT(op, (int)av[i][j]);
		}
	}
	op[5] = i;
	return (op);
}
