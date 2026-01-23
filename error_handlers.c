/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:16:44 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/23 11:32:10 by ikalach          ###   ########.fr       */
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

static void	fill_pos(struct s_Node **head)
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

void	fill_list(int count, char **argv, struct s_Node **head)
{
	int	i;

	i = 0;
	while (i < count)
	{
		insert_node_end(head, ft_atoi(argv[i]));
		i++;
	}
	fill_pos(head);
	rank_finder(head);
}

int	error_handler(int argc, char **argv, struct s_Node **head)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (1);
	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	fill_list(argc - 1, argv + 1, head);
	if (any_duplicates(*head))
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
