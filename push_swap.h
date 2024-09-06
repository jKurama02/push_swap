/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:03:43 by anmedyns          #+#    #+#             */
/*   Updated: 2024/09/06 16:51:23 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	maxnum;
}				t_stack;

int		ft_strlen(char *s);
char	**split( char *s, char c);
void	algoritm(t_stack *stacks);
void	ft_ss(t_stack *stacks);
void	ft_sb(t_stack *stacks);
void	ft_rra(t_stack *stacks);
void	ft_ra(t_stack *stacks);
void	ft_sa(t_stack *stacks);
void	ft_rb(t_stack *stacks);
void	ft_rr(t_stack *stacks);
void	ft_rrb(t_stack *stacks);
void	ft_rrr(t_stack *stacks);
void	ft_pa(t_stack *stacks);
void	ft_pb(t_stack *stacks);
int		binar(int n);
int		ft_atoi(char *str);
void	free_mat(char **mtx);
int		max_num(int *arr, int len);
int		ft_len(char **mat);
void	init_stacks(int argc, char **argv, t_stack *stacks);
char	**ft_put_num(char **numeri, char **argv);
int		check_alpha(int argc, char **argv);
void	ft_exit(t_stack stacks);
void	ft_five_sorting(t_stack *stacks);
void	ft_five(t_stack *stacks);
int		ft_min(t_stack *stacks);
void	ft_min_swap_first_element(t_stack *stacks);
void	ft_three_sorting(t_stack *stacks);

#endif
