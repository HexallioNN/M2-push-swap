/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:13:29 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/22 12:55:15 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

static void	sort_three(struct s_Node **a)
{
	struct s_Node	*temp;
	int				is_sorted;
	int				any_operations;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	is_sorted = 0;
	while (!is_sorted)
	{
		temp = *a;
		any_operations = 0;
		is_sorted = 1;
		if (temp->data > temp->next->data)
		{
			sa(a);
			any_operations = 1;
		}
		temp = *a;
		if (temp->next->data > temp->next->next->data)
		{
			ra(a);
			any_operations = 1;
		}
		if (any_operations)
			is_sorted = 0;
	}
}

// static void	sort_turk(struct s_Node **a, struct s_Node **b)
// {
// }

void	sort_main(struct s_Node **a, int count)
{
	struct s_Node *temp;
	int is_not_sorted;

	is_not_sorted = 0;
	temp = *a;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
		{
			is_not_sorted = 1;
		}
		temp = temp->next;
	}
	if (count == 2 && is_not_sorted == 1)
		sa(a);
	else if (count == 3 && is_not_sorted == 1)
		sort_three(a);
	// else if (count > 3 && is_not_sorted == 1)
	// 	sort_turk(&a, &b);
}