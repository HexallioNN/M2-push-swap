/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:47:40 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/24 12:25:00 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	rrr(struct s_Node **a, struct s_Node **b)
{
	struct s_Node	*list_a;
	struct s_Node	*list_b;

	list_a = *a;
	list_b = *b;
	if (list_a->next != NULL && list_b->next != NULL)
	{
		shift_down(a);
		shift_down(b);
		ft_printf("rrr\n");
	}
	else if (list_b->next != NULL && list_a->next == NULL)
	{
		shift_down(b);
		ft_printf("rrb\n");
	}
	else if (list_a->next != NULL && list_b->next == NULL)
	{
		shift_down(a);
		ft_printf("rra\n");
	}
}

void	swap(struct s_Node **head)
{
	struct s_Node	*first;
	struct s_Node	*second;

	if (!head || !*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
}

void	put(struct s_Node **head1, struct s_Node **head2)
{
	struct s_Node	*temp;

	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
}

void	shift_up(struct s_Node **head)
{
	struct s_Node	*temp;
	struct s_Node	*loop;

	loop = *head;
	temp = *head;
	*head = temp->next;
	while (loop->next != NULL)
	{
		loop = loop->next;
	}
	loop->next = temp;
	temp->next = NULL;
}

void	shift_down(struct s_Node **head)
{
	struct s_Node	*temp;
	struct s_Node	*loop;

	loop = *head;
	while (loop->next->next != NULL)
	{
		loop = loop->next;
	}
	temp = loop->next;
	loop->next = NULL;
	temp->next = *head;
	*head = temp;
}
