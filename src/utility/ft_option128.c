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

/*
**	Returns a bit array flagging all options. 
**	Decrements 'argc' and increments 'argv' for each options.
**	'argv[1]' will always be the first 'argv' after options
**	similar to having no options.
*/

int		*ft_option128(int *ac, char ***av)
{
	int		i;
	int		j;
	int		*op;

	i = 0;
	op = (int *)malloc(sizeof(int) * 4);
	while (i < 4)
		op[i++] = 0;
	if (*ac > 1 && op)
	{
		while (*(*av + 1) && (*(*av + 1))[0] == '-' && (*(*av + 1))[1] != 0)
		{
			(*ac)--;
			(*av)++;
			j = 1;
			while ((**av)[j] > 0 && (**av)[j] <= 127)
			{
				SETBIT(op, (int)(**av)[j]);
				j++;
			}
		}
	}
	return (op);
}
