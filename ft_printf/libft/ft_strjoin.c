/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:09:53 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:18:40 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		s1_count;
	int		s2_count;
	int		i;

	s1_count = ft_strlen(s1);
	s2_count = ft_strlen(s2);
	result = malloc(s1_count + s2_count + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < s1_count)
	{
		result[i] = s1[i];
		i++;
	}
	s2_count = 0;
	while (s2[s2_count] != '\0')
	{
		result[i + s2_count] = s2[s2_count];
		s2_count++;
	}
	result[i + s2_count] = '\0';
	return (result);
}
