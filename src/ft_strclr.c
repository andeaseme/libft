/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:35:21 by aphan             #+#    #+#             */
/*   Updated: 2016/09/24 21:40:30 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	char *d;

	if (s)
	{
		d = s;
		while (*d != '\0')
		{
			*d = '\0';
			d++;
		}
	}
}
