/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodeFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 11:45:48 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/23 10:39:17 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

struct s_Node	*create_node(int data)
{
	struct s_Node	*new_node;

	new_node = (struct s_Node *)malloc(sizeof(struct s_Node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	insert_node_beginning(struct s_Node **reference, int data)
{
	struct s_Node	*new_node;

	new_node = create_node(data);
	new_node->next = *reference;
	*reference = new_node;
}

void	insert_node_end(struct s_Node **reference, int data)
{
	struct s_Node	*new_node;
	struct s_Node	*temp;

	new_node = create_node(data);
	if (*reference == NULL)
	{
		*reference = new_node;
		return ;
	}
	temp = *reference;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
}

void	print_node(struct s_Node *head)
{
	struct s_Node	*temp;

	temp = head;
	while (temp != NULL)
	{
		ft_printf("%d (%d)(%d)\n", temp->data, temp->pos, temp->rank);
		temp = temp->next;
	}
}

void	free_list(struct s_Node *reference)
{
	struct s_Node	*temp;

	while (reference != NULL)
	{
		temp = reference;
		reference = reference->next;
		free(temp);
	}
}
