/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:16:44 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/29 12:49:05 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"
#include <limits.h>

int	is_number(char *str, int j)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	if (str[j] == '-' || str[j] == '+')
	{
		if (!str[j + 1])
			return (0);
		if (str[j] == '-')
			sign = -1;
		j++;
	}
	while (str[j])
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		result = result * 10 + (str[j] - '0');
		if ((sign == 1 && result > INT_MAX)
			|| (sign == -1 && - result < INT_MIN))
			return (0);
		j++;
	}
	return (1);
}

int	any_duplicates(struct s_Node *head)
{
	struct s_Node	*i;
	struct s_Node	*j;

	i = head;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->data == j->data)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

void	fill_pos(struct s_Node **head)
{
	struct s_Node	*temp;
	int				i;

	i = 0;
	temp = *head;
	while (temp != NULL)
	{
		temp->pos = i;
		temp = temp->next;
		i++;
	}
}

int	list_size(struct s_Node *head)
{
	int	count;

	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

int	error_handler(int argc, char **argv, struct s_Node **head, int i)
{
	int		j;
	char	**split;

	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split || !*split)
			return (free_split(split), ft_printf("Error\n"), 1);
		j = 0;
		while (split[j])
		{
			if (!is_number(split[j], 0))
				return (free_split(split), ft_printf("Error\n"), 1);
			insert_node_end(head, ft_atoi(split[j]));
			j++;
		}
		free_split(split);
		i++;
	}
	if (any_duplicates(*head))
		return (ft_printf("Error\n"), 1);
	fill_pos(head);
	rank_finder(head);
	return (0);
}
