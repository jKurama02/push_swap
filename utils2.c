/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:15:24 by anmedyns          #+#    #+#             */
/*   Updated: 2024/09/06 16:50:48 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_swap_first_element(t_stack *stacks)
{
	int	min;
	int	i;

	min = ft_min(stacks);
	if (min > stacks->maxnum / 2)
	{
		i = stacks->maxnum - min;
		while (i-- > 0)
			ft_rra(stacks);
	}
	else
	{
		i = min;
		while (i-- > 0)
			ft_ra(stacks);
	}
}

int	ft_min(t_stack *stacks)
{
	int	i;
	int	min;

	min = 0;
	i = -1;
	while (++i < stacks->maxnum)
	{
		if (stacks->a[i] < stacks->a[min])
			min = i;
	}
	return (min);
}

void	ft_five_sorting(t_stack *stacks)
{
	ft_min_swap_first_element(stacks);
	ft_pb(stacks);
	ft_min_swap_first_element(stacks);
	ft_pb(stacks);
	ft_three_sorting(stacks);
	ft_pa(stacks);
	ft_pa(stacks);
}
