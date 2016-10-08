/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 17:14:37 by aphan             #+#    #+#             */
/*   Updated: 2016/09/25 17:56:39 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ap_intlength(int value, const int base)
{
	int		length;

	length = 0;
	if (base == 10 && value < 0)
		length++;
	if (value == 0)
		length++;
	while (value != 0)
	{
		value /= base;
		length++;
	}
	return (length);
}

char		*ft_itoa_base(int value, int base)
{
	int		len;
	int		index;
	char	*str;

	if (base < 2 || base > 16)
		return (0);
	len = ap_intlength(value, base);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (base == 10 && value < 0)
		str[0] = '-';
	str[len] = '\0';
	while (len-- > 0)
	{
		index = value % base;
		if (index < 0)
			index = -index;
		if (index > 9)
			str[len] = index + 'A' - 10;
		else
			str[len] = index + '0';
		value /= base;
		if (value == 0)
			break ;
	}
	return (str);
}
