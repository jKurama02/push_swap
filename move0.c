/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:24:26 by anmedyns          #+#    #+#             */
/*   Updated: 2024/07/25 18:34:17 by anmedyns         ###   ########.fr       */
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
