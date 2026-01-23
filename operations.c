/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:43:30 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/23 13:14:34 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	sa(struct s_Node **a)
{
	if (a && *a && (*a)->next)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void	sb(struct s_Node **b)
{
	if (b && *b && (*b)->next)
	{
		swap(b);
		ft_printf("sb\n");
	}
}

void	ss(struct s_Node **a, struct s_Node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	pa(struct s_Node **a, struct s_Node **b)
{
	if (*b != NULL)
	{
		put(b, a);
		ft_printf("pa\n");
	}
}

void	pb(struct s_Node **a, struct s_Node **b)
{
	if (*a != NULL)
	{
		put(a, b);
		ft_printf("pb\n");
	}
}
