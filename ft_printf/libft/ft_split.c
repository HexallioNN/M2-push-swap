/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:18 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:00:54 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static void	free_array(char **array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	count_substrings(const char *s, char c)
{
	t_count_vars	v;

	v.count = 0;
	v.in_sub = 0;
	while (*s)
	{
		if (*s != c && !v.in_sub)
		{
			v.in_sub = 1;
			v.count++;
		}
		else if (*s == c)
			v.in_sub = 0;
		s++;
	}
	return (v.count);
}

static char	*sub_dup(const char *s, int start, int len)
{
	char	*substr;
	int		i;

	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

static char	**fill_array(const char *s, char c, int strs, char **array)
{
	t_fill_vars	v;

	v.i = 0;
	v.substr = 0;
	while (s[v.i] && v.substr < strs)
	{
		if (s[v.i] != c)
		{
			v.start = v.i;
			while (s[v.i] && s[v.i] != c)
				v.i++;
			v.len = v.i - v.start;
			array[v.substr] = sub_dup(s, v.start, v.len);
			if (!array[v.substr])
			{
				free_array(array, v.substr);
				return (NULL);
			}
			v.substr++;
		}
		else
			v.i++;
	}
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		strs;

	if (!s)
		return (NULL);
	strs = count_substrings(s, c);
	array = (char **)ft_calloc(strs + 1, sizeof(char *));
	if (!array)
		return (NULL);
	array = fill_array(s, c, strs, array);
	return (array);
}

// int	main(void)
// {
// 	char **array = ft_split("This is a test of the split function", ' ');
// 	int i = 0;
// 	while (array[i] != NULL)
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// }