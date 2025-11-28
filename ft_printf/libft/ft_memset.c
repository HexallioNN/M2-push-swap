/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:24:10 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:15:17 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	char	*test;

	test = ptr;
	while (n > 0)
	{
		*test = value;
		test++;
		n--;
	}
	return (ptr);
}
