/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:44:42 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/28 16:23:02 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			j;
	size_t			i;

	j = 1;
	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		pdest += n - 1;
		psrc += n - 1;
	}
	while (i < n)
	{
		*pdest = *psrc;
		pdest += j;
		psrc += j;
		i++;
	}
	return (dest);
}
