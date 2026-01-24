/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:16:44 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/24 15:39:55 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int	is_number(char *str)
{
	int	j;
	int	length;

	j = 0;
	length = ft_strlen(str);
	if (!str || length == 0)
		return (0);
	if ((str[0] == '-' || str[0] == '+') && length > 1)
		j++;
	while (j < length)
	{
		if (str[j] < '0' || str[j] > '9')
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

int	error_handler(int argc, char **argv, struct s_Node **head)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split || !*split)
			return (free_split(split), ft_printf("Error\n"), 1);
		j = 0;
		while (split[j])
		{
			if (!is_number(split[j]))
				return (free_split(split), ft_printf("Error\n"), 1);
			insert_node_end(head, ft_atoi(split[j]));
			j++;
		}
		i++;
	}
	if (any_duplicates(*head))
		return (free_split(split), ft_printf("Error\n"), 1);
	fill_pos(head);
	rank_finder(head);
	return (free_split(split), 0);
}
