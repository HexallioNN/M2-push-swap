/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:43:15 by ikalach           #+#    #+#             */
/*   Updated: 2026/01/13 13:01:18 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

struct				s_Node
{
	int				data;
	struct s_Node	*next;
};

void				sa(void);
void				sb(void);
void				ss(void);
void				pa(void);
void				pb(void);
void				ra(void);
void				rb(void);
void				rr(void);
void				rra(void);
void				rrb(void);
void				rrr(void);
void				swap(void);
void				put(void);
void				shift_up(void);
void				shift_down(void);
int					is_number(char *str);
int					error_handler(int argc, char **argv, struct s_Node *head);
void				*fill_list(int count, char **argv, struct s_Node *head);
int					any_duplicates(int i_count, int j_count,
						struct s_Node *head);
struct s_Node		*create_node(int data);
struct s_Node		insert_node_beginning(struct s_Node **reference, int data);
struct s_Node		insert_node_end(struct s_Node **reference, int data);
void				print_node(struct s_Node *head);
void				free_list(struct s_Node *reference);

#endif