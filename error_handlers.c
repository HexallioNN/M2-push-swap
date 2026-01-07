/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:16:44 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/07 12:52:34 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

/*
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays
change everything to be able to work with struct instead of arrays

is number and error handler parts before fill list stays the
same to check the arguments given after that change functions
including fill_list to make it work with linked lists instead
of arrays and that should fix this part
*/

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

// fix this to work with linked lists
int	any_duplicates(int count, struct s_Node *head)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < count)
	{
		tmp = list[i];
		j = 0;
		while (j < count)
		{
			if (tmp == list[j] && j != i)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	*fill_list(int count, char **argv, struct s_Node *head)
{
	int	i;

	i = 0;
	while (i < count)
	{
		insert_node_end(&head, ft_atoi(argv[i]));
		i++;
	}
}

int	error_handler(int argc, char **argv, struct s_Node *head)
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
	fill_list(argc - 1, argv + 1, &head);
	if (any_duplicates(argc - 1, &head))
	{
		free_list(&head);
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
