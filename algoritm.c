/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:14:45 by anmedyns          #+#    #+#             */
/*   Updated: 2024/07/25 17:31:02 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_asc(t_stack *stacks)
{
	int i;

	i = 0;
	while(i < stacks->len_a - 1)
	{
		if(stacks->a[i] > stacks->a[i + 1])
			return(0);
		i++;
	}
	return(1);
}

void algoritm(t_stack *stacks)
{
	if(check_asc(stacks))
	return;
	
	write(1, "ok\n", 3);
}
