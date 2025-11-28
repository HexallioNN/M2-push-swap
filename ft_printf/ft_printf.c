/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:47:32 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/12 12:37:46 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>

static int	process_format(const char **fmt, va_list *args, int count)
{
	(*fmt)++;
	return (handle_format_case(**fmt, args, count));
}

static int	process_char(const char **fmt, int count)
{
	return (ft_emptycase(count, **fmt));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;
	int		res;

	if (!fmt)
		return (-1);
	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			res = process_format(&fmt, &args, count);
		else
			res = process_char(&fmt, count);
		if (res == -1)
		{
			va_end(args);
			return (-1);
		}
		count = res;
		fmt++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	int	tse;
// 	int	*ptr;

// 	tse = 1;
// 	ptr = &tse;
// 	ft_printf("hey%");
// 	printf("hey%");
// }
