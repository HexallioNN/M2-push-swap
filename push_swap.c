/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/24 15:39:08 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(int argc, char **argv)
{
	struct s_Node	*list_a;
	int				count;
	struct s_Node	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (argc < 2)
	{
		free_list(list_a);
		free_list(list_b);
		return (1);
	}
	if (error_handler(argc, argv, &list_a))
	{
		free_list(list_a);
		free_list(list_b);
		return (1);
	}
	count = list_size(list_a);
	sort_main(&list_a, &list_b, count);
	free_list(list_a);
	free_list(list_b);
	return (0);
}
