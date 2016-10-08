/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:11:51 by aphan             #+#    #+#             */
/*   Updated: 2016/09/25 23:35:03 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ap_startend(char const *s, char **start, char **end)
{
	int			trufal;

	trufal = 1;
	while (*s != '\0')
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			*end = (char *)s;
		if (trufal == 1 && *s != ' ' && *s != '\n' && *s != '\t')
		{
			*start = (char *)s;
			trufal = 0;
		}
		s++;
	}
}

char		*ft_strtrim(char const *s)
{
	char		*start;
	char		*end;
	char		*trim;

	if (!s)
		return (0);
	end = (char *)s;
	start = (char *)s;
	ap_startend(s, &start, &end);
	trim = ft_strsub(s, start - s, end - start + 1);
	if (end - start <= 0)
		trim[0] = '\0';
	return (trim);
}
