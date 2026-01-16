/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:43:30 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/16 16:35:39 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	sa(struct s_Node *head)
{
	swap(head);
	ft_printf("sa\n");
}

void	sb(struct s_Node *head)
{
	swap(head);
	ft_printf("sb\n");
}

void	ss(struct s_Node *head, struct s_Node *head2)
{
	swap(head);
	swap(head2);
	ft_printf("ss\n");
}

void	pa(struct s_Node **head1, struct s_Node **head2)
{
	if (*head2 != NULL)
	{
		put(head2, head1);
		ft_printf("pa\n");
	}
}

void	pb(struct s_Node **head1, struct s_Node **head2)
{
	if (*head1 != NULL)
	{
		put(head1, head2);
		ft_printf("pb\n");
	}
}
