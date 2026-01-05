/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/06 00:03:39 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*list;
	int	*list_b;

	list_b = malloc((argc - 1) * sizeof(int));
	list = malloc((argc - 1) * sizeof(int));
	list = fill_list(argc - 1, argv + 1, list);
	if (error_handler(argc, argv, list))
	{
		free(list);
		return (1);
	}
	free(list);
	return (0);
}
