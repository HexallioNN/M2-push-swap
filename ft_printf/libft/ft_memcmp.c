/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:32:38 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:13:31 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *source, const void *compare, size_t n)
{
	const unsigned char	*s1 = (const unsigned char *)source;
	const unsigned char	*s2 = (const unsigned char *)compare;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}
