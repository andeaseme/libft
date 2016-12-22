/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:17:21 by aphan             #+#    #+#             */
/*   Updated: 2016/12/03 15:18:37 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findint(int *array, size_t size, int findme)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (findme == array[i])
			return (i);
		i++;
	}
	return (-1);
}
