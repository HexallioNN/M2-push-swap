/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:42:09 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:39:28 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)str;
	if (to_find[0] == '\0')
		return (result);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && str[i + j] != '\0' && to_find[j] != '\0' && str[i
				+ j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&result[i]);
		i++;
	}
	return (NULL);
}
