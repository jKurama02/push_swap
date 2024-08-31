/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:58:23 by anmedyns          #+#    #+#             */
/*   Updated: 2024/08/30 21:00:58 by anmedyns         ###   ########.fr       */
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

// int check_alpha(int argc, char **argv)
// {
// 	int	i;

// 	i = 1;
// 	while(argv[i] =! '\0' && ((argv[i] >= '0' && argv[i] <= '9') || argv[i] == ' '))
// 	{
// 		i++;
// 	}
// 	if(argv[i] == '\0')
// 		return (0);
// 	return (1);
// }
