/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:02:25 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/11 08:45:21 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_xcase(unsigned int variable, int count, char string)
{
	char	*temps;
	int		i;
	int		written;

	temps = ft_itoa_base_unsigned(variable, 16);
	if (!temps)
		return (-1);
	if (string == 'X')
	{
		i = 0;
		while (temps[i] != '\0')
		{
			temps[i] = ft_toupper(temps[i]);
			i++;
		}
	}
	written = write(1, temps, ft_strlen(temps));
	free(temps);
	if (written == -1)
		return (-1);
	return (count + written);
}

int	ft_emptycase(int count, char string)
{
	int	written;

	written = write(1, &string, 1);
	if (written == -1)
		return (-1);
	return (count + written);
}
