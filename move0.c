/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:24:26 by anmedyns          #+#    #+#             */
/*   Updated: 2024/08/02 20:32:07 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack *stacks)
{
	int i;

	i = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = i;
	write(2, "sa\n", 3);
	return;
}

void ft_sb(t_stack *stacks)
{
	int i;

	i = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = i;
	write(2, "sb\n", 3);
	return;
}

void ft_ss(t_stack *stacks)
{
	int t;

	t = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = t;

	t = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = t;
	write(2, "ss\n", 3);
	return;
}

void ft_ra(t_stack *stacks)
{
	int tmp;
	int i;

	tmp = stacks->a[0];
	i = 0;
	while(i < (stacks->len_a -1))
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[i] = tmp;
	write(1, "ra\n", 3);
	return;
}
void ft_rb(t_stack *stacks)
{
	int tmp;
	int i;

	tmp = stacks->b[0];
	i = 0;
	while(i < (stacks->len_b -1))
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[i] = tmp;
	write(1, "rb\n", 3);
	return;
}

void ft_rr(t_stack *stacks)
{
	int i;
	int t;

	i = 0;
	t = stacks->a[0];

	while(i < stacks->len_a - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[i] = t;

	i = 0;
	t = stacks->b[0];

	while(i < stacks->len_b - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[i] = t;
	write(1, "rr\n", 3);
	return;
}

void ft_rra(t_stack *stacks)
{
	int i;
	int t;

	i = stacks->len_a - 1;
	t = stacks->a[stacks->len_a - 1];

	while(i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[0] = t;
	write(1, "rra\n", 4);
	return;
}

void ft_rrb(t_stack *stacks)
{
	int i;
	int t;

	i = stacks->len_b - 1;
	t = stacks->b[stacks->len_b - 1];

	while(i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[0] = t;
	write(1, "rrb\n", 4);
	return;
}

void ft_rrr(t_stack *stacks)
{
	int i;
	int t;

	i = stacks->len_a;
	t = stacks->a[stacks->len_a - 1];

	while(i-- > 0)
		stacks->a[i] = stacks->a[i - 1];
	stacks->a[0] = t;
	i = stacks->len_b;
	t = stacks->b[stacks->len_b - 1];

	while(i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[i] = t;
	write(1, "rrr\n", 4);
	return;
}
void ft_pa(t_stack *stacks)
{
	int	len;

	len = stacks->len_a;
	while (len > 0)
	{
		stacks->a[len] = stacks->a[len - 1];
		len--;
	}
	stacks->len_a++;
	stacks->a[0] = stacks->b[0];
	len = 1;
	while (len < stacks->len_b)
	{
		stacks->b[len - 1] = stacks->b[len];
		len++;
	}
	stacks->len_b--;
	write(1, "pa\n", 3);
	return;
}

void	ft_pb(t_stack *stacks)
{
	if(stacks->len_a == 0)
		return;
	int	len;

	len = stacks->len_b;
	while (len > 0)
	{
		stacks->b[len] = stacks->b[len - 1];
		len--;
	}
	stacks->len_b++;
	stacks->b[0] = stacks->a[0];
	len = 1;
	while (len < stacks->len_a)
	{
		stacks->a[len - 1] = stacks->a[len];
		len++;
	}
	stacks->len_a--;
	write(1, "pb\n", 3);
	return;
}


