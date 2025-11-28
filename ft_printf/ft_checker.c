/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:38:19 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/12 12:38:26 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	handle_format_case(char spec, va_list *args, int count)
{
	int	result;

	result = 0;
	if (spec == 'd' || spec == 'i')
		result = ft_dicase(va_arg(*args, int), count);
	else if (spec == 'c')
		result = ft_ccase(va_arg(*args, int), count);
	else if (spec == 's')
		result = ft_scase(va_arg(*args, char *), count);
	else if (spec == 'p')
		result = ft_pcase(va_arg(*args, void *), count);
	else if (spec == 'u')
		result = ft_ucase(va_arg(*args, unsigned int), count);
	else if (spec == 'x' || spec == 'X')
		result = ft_xcase(va_arg(*args, unsigned int), count, spec);
	else if (spec == '%')
		result = ft_emptycase(count, '%');
	else if (spec != '\0')
		result = ft_emptycase(count, spec);
	else if (spec == '\0')
		return (-1);
	if (result == -1)
		return (-1);
	return (result);
}
