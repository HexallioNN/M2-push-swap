/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:47:15 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/17 15:19:00 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	ra(struct s_Node **a)
{
	if (*a != NULL)
	{
		shift_up(a);
		ft_printf("ra\n");
	}
}

void	rb(struct s_Node **b)
{
	if (*b != NULL)
	{
		shift_up(b);
		ft_printf("rb\n");
	}
}

void	rr(struct s_Node **a, struct s_Node **b)
{
	if (*a != NULL && *b != NULL)
	{
		shift_up(a);
		shift_up(b);
		ft_printf("rr\n");
	}
	if (*b != NULL)
	{
		shift_up(b);
		ft_printf("rb\n");
	}
	if (*a != NULL)
	{
		shift_up(a);
		ft_printf("ra\n");
	}
}

// reverse ra shift down instead of up last element becomes the first one
void	rra(void)
{
}

// reverse rb shift down instead of up last element becomes the first one
void	rrb(void)
{
}
