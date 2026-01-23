/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:43:15 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/23 10:36:34 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

struct				s_Node
{
	int				rank;
	int				pos;
	int				data;
	struct s_Node	*next;
};

void				sa(struct s_Node **a);
void				sb(struct s_Node **b);
void				ss(struct s_Node **a, struct s_Node **b);
void				pa(struct s_Node **a, struct s_Node **b);
void				pb(struct s_Node **a, struct s_Node **b);
void				ra(struct s_Node **a);
void				rb(struct s_Node **b);
void				rr(struct s_Node **a, struct s_Node **b);
void				rra(struct s_Node **a);
void				rrb(struct s_Node **b);
void				rrr(struct s_Node **a, struct s_Node **b);
void				swap(struct s_Node **head);
void				put(struct s_Node **head1, struct s_Node **head2);
void				shift_up(struct s_Node **head);
void				shift_down(struct s_Node **head);
int					is_number(char *str);
int					error_handler(int argc, char **argv, struct s_Node **head);
void				fill_list(int count, char **argv, struct s_Node **head);
int					any_duplicates(struct s_Node *head);
struct s_Node		*create_node(int data);
void				insert_node_beginning(struct s_Node **reference, int data);
void				insert_node_end(struct s_Node **reference, int data);
void				print_node(struct s_Node *head);
void				free_list(struct s_Node *reference);
void				sort_main(struct s_Node **a, int count);
void				rank_finder(struct s_Node **a);

#endif