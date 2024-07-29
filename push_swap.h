/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:03:43 by anmedyns          #+#    #+#             */
/*   Updated: 2024/07/29 17:52:34 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack{
	int *a;
	int *b;
	int len_a;
	int len_b;
}				t_stack;

int ft_strlen(char * s);
char	**split( char *s, char c);
void algoritm(t_stack *stacks);





void ft_sa(t_stack *stacks);

#endif
