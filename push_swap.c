/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:03:01 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/22 12:01:49 by ikalach          ###   ########.fr       */
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
		free_list(list_a);
		return (1);
	}
	sort_main(&list_a, argc - 1);
	ft_printf("List a:\n");
	print_node(list_a);
	free_list(list_a);
	free_list(list_b);
	return (0);
}

// ft_printf("List b:\n");
// print_node(list_b);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);
// // sa(list_a);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);
// pb(&list_a, &list_b);
// pb(&list_a, &list_b);
// rrr(&list_a, &list_b);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);
// pb(&list_a, &list_b);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);
// pb(&list_a, &list_b);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);
// pa(&list_a, &list_b);
// ft_printf("List a:\n");
// print_node(list_a);
// ft_printf("List b:\n");
// print_node(list_b);