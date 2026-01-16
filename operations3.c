/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:47:40 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/16 16:36:23 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// rra and rrb at the same time
void	rrr(void)
{
}

void	swap(struct s_Node *head)
{
	struct s_Node	*temp;
	int				value;

	if (head != NULL && head->next != NULL)
	{
		value = 0;
		temp = head;
		value = head->data;
		temp = temp->next;
		head->data = temp->data;
		temp->data = value;
	}
}

void	put(struct s_Node **head1, struct s_Node **head2)
{
	struct s_Node	*temp;

	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
}

// for ra rb and rr
void	shift_up(void)
{
}

// for rra rrb and rrr
void	shift_down(void)
{
}
