/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2025/12/30 16:04:00 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*list;

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
