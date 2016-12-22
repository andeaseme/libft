/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 22:18:50 by aphan             #+#    #+#             */
/*   Updated: 2016/12/09 22:55:27 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	qs_partition(int arr[], int low, int high)
{
	int	pivot;
	int	i;
	int j;

	pivot = arr[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (arr[j] <= pivot)
		{
			SWAP(arr[i], arr[j]);
			i++;
		}
		j++;
	}
	SWAP(arr[i], arr[high]);
	return (i);
}

void		ft_quicksort(int arr[], int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = qs_partition(arr, low, high);
		ft_quicksort(arr, low, pi - 1);
		ft_quicksort(arr, pi + 1, high);
	}
}
