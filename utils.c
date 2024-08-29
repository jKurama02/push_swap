/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:58:23 by anmedyns          #+#    #+#             */
/*   Updated: 2024/08/29 16:24:50 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_mat(char **mtx)
{
	int	i;

	i = 0;
	while (mtx[i])
	{
		free(mtx[i]);
		i++;
	}
	free(mtx);
}

int	max_num(int *arr, int len)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (i < len)
	{
		if (arr[i] > arr[k])
		{
			k = i;
		}
		i++;
	}
	return (arr[k]);
}

int	ft_len(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
		i++;
	return (i);
}
