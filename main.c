/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:58:23 by anmedyns          #+#    #+#             */
/*   Updated: 2024/07/25 17:18:54 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_put_num(char** numeri, char**argv)
{
	int i;
	int k;

	i = 1;
	while(argv[i])
	{
		k = 0;
		numeri[i-1] = (char *)malloc(ft_strlen(argv[i]));
		while(argv[i][k])
		{
			numeri[i-1][k] = argv[i][k];
			k++;
		}
		numeri[i-1][k] = '\0';
		i++;
	}
	numeri[i-1] = '\0';
}

int ft_len(char **mat)
{
	int i;

	i = 0;
	while(mat[i])
		i++;
	return (i);
}

int	ft_atoi(char *str, int *f)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	res = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (sign == 1 && (res > 214748364 || (res == 214748364 && str[i] - '0' > 7))
				||	sign == -1 && (res > 214748364 || (res == 214748364 && str[i] - '0' > 8)))
			*f = 1;
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (str[i])
		*f = 1;
	return (res * sign);
}

void free_mat(char ** mtx)
{
	int i;

	i = 0;

	while(mtx[i])
	{
		free(mtx[i]);
		i++;
	}
	free(mtx);
}

int check_dup(int *arr, int len)
{
	int i;
	int k;

	i=0;
	while(i < len - 1)
	{
		k=i+1;
		while(k < len)
		{
			if(arr[i] == arr[k])
				return(1);
			k++;
		}
		i++;
	}
	return(0);
}

int main (int argc, char **argv)
{
	char **numeri;
	t_stack stacks;
	int f;
	int i;

	if(argc == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else if(argc == 2)
		numeri = split(argv[1], ' ');
	else
	{
		numeri = (char **)malloc(sizeof(char*) * (argc));
		ft_put_num(numeri, argv);
	}
	stacks.len_a = ft_len(numeri);
	stacks.a = (int*)malloc(sizeof(int) * stacks.len_a);
	f = 0;
	i = 0;
	while(i < stacks.len_a)
	{
		stacks.a[i] = ft_atoi(numeri[i], &f);
		i++;
	}
	free_mat(numeri);
	if(f == 1 || check_dup(stacks.a,stacks.len_a))
	{
		write(1, "Error\n", 6);
		free(stacks.a);
		return(0);
	}
	algoritm(&stacks);
	free(stacks.a);
	return(0);
}
