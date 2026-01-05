/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/06 00:26:22 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*list;
	int	*list_b;

	if (error_handler(argc, argv, list))
	{
		free(list);
		return (1);
	}
	list_b = malloc((argc - 1) * sizeof(int));
	free(list_b);
	free(list);
	return (0);
}
