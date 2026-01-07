/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/07 12:54:48 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	struct s_Node	*list_a;
	struct s_Node	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (error_handler(argc, argv, &list_a))
	{
		free_list(&list_a);
		return (1);
	}
	free_list(&list_a);
	free_list(&list_b);
	return (0);
}
