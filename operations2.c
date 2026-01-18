/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:47:15 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/18 17:14:11 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	ra(struct s_Node **a)
{
	struct s_Node	*list_a;

	list_a = *a;
	if (list_a->next != NULL)
	{
		shift_down(a);
		ft_printf("ra\n");
	}
}

void	rb(struct s_Node **b)
{
	struct s_Node	*list_b;

	list_b = *b;
	if (list_b->next != NULL)
	{
		shift_down(b);
		ft_printf("rb\n");
	}
}

void	rr(struct s_Node **a, struct s_Node **b)
{
	struct s_Node	*list_a;
	struct s_Node	*list_b;

	list_a = *a;
	list_b = *b;
	if (list_a->next != NULL && list_b->next != NULL)
	{
		shift_down(a);
		shift_down(b);
		ft_printf("rr\n");
	}
	else if (list_b->next != NULL && list_a->next == NULL)
	{
		shift_down(b);
		ft_printf("rb\n");
	}
	else if (list_a->next != NULL && list_b->next == NULL)
	{
		shift_down(a);
		ft_printf("ra\n");
	}
}

void	rra(struct s_Node **a)
{
	struct s_Node	*list_a;

	list_a = *a;
	if (list_a->next != NULL)
	{
		shift_up(a);
		ft_printf("rra\n");
	}
}

void	rrb(struct s_Node **b)
{
	struct s_Node	*list_b;

	list_b = *b;
	if (list_b->next != NULL)
	{
		shift_up(b);
		ft_printf("rrb\n");
	}
}
