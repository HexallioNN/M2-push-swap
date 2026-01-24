/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:13:29 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/24 15:18:05 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

static void	sort_three(struct s_Node **a)
{
	struct s_Node	*temp;
	int				is_sorted;
	int				any_operations;

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
			rra(a);
			any_operations = 1;
		}
		if (any_operations)
			is_sorted = 0;
	}
}

void	rank_finder(struct s_Node **a)
{
	struct s_Node	*i;
	struct s_Node	*j;
	int				rank;

	j = *a;
	while (j != NULL)
	{
		rank = 0;
		i = *a;
		while (i != NULL)
		{
			if (j->data > i->data)
				rank++;
			i = i->next;
		}
		j->rank = rank;
		j = j->next;
	}
}

static void	sort_radix(struct s_Node **a, struct s_Node **b, int count)
{
	int	i;
	int	j;
	int	max_bits;

	i = 0;
	max_bits = 0;
	while ((count) >> max_bits != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < count)
		{
			if (((*a)->rank >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

static void	sort_five(struct s_Node **a, struct s_Node **b, int count)
{
	int	size;

	size = count;
	while (size != 3)
	{
		if ((*a)->rank == 0 || (*a)->rank == 1)
		{
			pb(a, b);
			size--;
		}
		else
			ra(a);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
	if ((*a)->rank > (*a)->next->rank)
		sa(a);
}

void	sort_main(struct s_Node **a, struct s_Node **b, int count)
{
	struct s_Node	*temp;
	int				is_not_sorted;

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
	else if (count <= 5 && is_not_sorted == 1)
		sort_five(a, b, count);
	else if (count > 5 && is_not_sorted == 1)
		sort_radix(a, b, count);
}
