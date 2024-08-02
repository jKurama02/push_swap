/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:24:26 by anmedyns          #+#    #+#             */
/*   Updated: 2024/08/02 18:38:12 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack *stacksss)
{
	int i;

	i = stacksss->a[0];
	stacksss->a[0] = stacksss->a[1];
	stacksss->a[1] = i;
	write(2, "sa\n", 3);
	return;
}

void ft_sb(t_stack *stacksss)
{
	int i;

	i = stacksss->b[0];
	stacksss->b[0] = stacksss->b[1];
	stacksss->b[1] = i;
	write(2, "sb\n", 3);
	return;
}

void ft_ss(t_stack *stacksss)
{
	int t;

	t = stacksss->a[0];
	stacksss->a[0] = stacksss->a[1];
	stacksss->a[1] = t;

	t = stacksss->b[0];
	stacksss->b[0] = stacksss->b[1];
	stacksss->b[1] = t;
	write(2, "ss\n", 3);
	return;
}

void ft_ra(t_stack *stacksss)
{
	int tmp;
	int i;

	tmp = stacksss->a[0];
	i = 0;
	while(i < (stacksss->len_a -1))
	{
		stacksss->a[i] = stacksss->a[i + 1];
		i++;
	}
	stacksss->a[i] = tmp;
	write(1, "ra\n", 3);
	return;
}
void ft_rb(t_stack *stacksss)
{
	int tmp;
	int i;

	tmp = stacksss->b[0];
	i = 0;
	while(i < (stacksss->len_b -1))
	{
		stacksss->b[i] = stacksss->b[i + 1];
		i++;
	}
	stacksss->b[i] = tmp;
	write(1, "rb\n", 3);
	return;
}

void ft_rr(t_stack *stacksss)
{
	int i;
	int t;

	i = 0;
	t = stacksss->a[0];

	while(i < stacksss->len_a - 1)
	{
		stacksss->a[i] = stacksss->a[i + 1];
		i++;
	}
	stacksss->a[i] = t;

	i = 0;
	t = stacksss->b[0];

	while(i < stacksss->len_b - 1)
	{
		stacksss->b[i] = stacksss->b[i + 1];
		i++;
	}
	stacksss->b[i] = t;
	write(1, "rr\n", 3);
	return;
}

void ft_rra(t_stack *stackss)
{
	int i;
	int t;

	i = stackss->len_a - 1;
	t = stackss->a[stackss->len_a - 1];

	while(i > 0)
	{
		stackss->a[i] = stackss->a[i - 1];
		i--;
	}
	stackss->a[0] = t;
	write(1, "rra\n", 4);
	return;
}

void ft_rrb(t_stack *stackss)
{
	int i;
	int t;

	i = stackss->len_b - 1;
	t = stackss->b[stackss->len_b - 1];

	while(i > 0)
	{
		stackss->b[i] = stackss->b[i - 1];
		i--;
	}
	stackss->b[0] = t;
	write(1, "rrb\n", 4);
	return;
}

void ft_rrr(t_stack *stackss)
{
	int i;
	int t;

	i = stackss->len_a;
	t = stackss->a[stackss->len_a - 1];

	while(i-- > 0)
		stackss->a[i] = stackss->a[i - 1];
	stackss->a[0] = t;
	i = stackss->len_b;
	t = stackss->b[stackss->len_b - 1];

	while(i > 0)
	{
		stackss->b[i] = stackss->b[i - 1];
		i--;
	}
	stackss->b[i] = t;
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


