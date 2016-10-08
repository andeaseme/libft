/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 23:57:01 by aphan             #+#    #+#             */
/*   Updated: 2016/09/22 23:57:29 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-' && str[i - 1] != '+')
	{
		i++;
		sign = -1;
	}
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		result = (10 * result) + str[i] - '0';
		i++;
	}
	return (sign * result);
}
