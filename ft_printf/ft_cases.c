/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:44:25 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/11 08:45:10 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_dicase(int variable, int count)
{
	char	*temps;
	int		written;

	temps = ft_itoa(variable);
	if (!temps)
		return (-1);
	written = write(1, temps, ft_strlen(temps));
	free(temps);
	if (written == -1)
		return (-1);
	return (count + written);
}

int	ft_ccase(int variable, int count)
{
	int	tempc;
	int	written;

	tempc = variable;
	written = write(1, &tempc, 1);
	if (written == -1)
		return (-1);
	return (count + written);
}

int	ft_scase(char *variable, int count)
{
	char	*temps;
	int		written;

	if (variable)
		temps = variable;
	else
		temps = "(null)";
	written = write(1, temps, ft_strlen(temps));
	if (written == -1)
		return (-1);
	return (count + written);
}

int	ft_pcase(void *variable, int count)
{
	unsigned long	tempp;
	char			*temps;
	int				written;

	if (variable == 0)
	{
		written = write(1, PTRNULL, ft_strlen(PTRNULL));
		if (written == -1)
			return (-1);
		return (count + written);
	}
	tempp = (unsigned long)(variable);
	written = write(1, "0x", 2);
	if (written == -1)
		return (-1);
	count += written;
	temps = ft_itoa_base_unsigned(tempp, 16);
	if (!temps)
		return (-1);
	written = write(1, temps, ft_strlen(temps));
	free(temps);
	if (written == -1)
		return (-1);
	return (count + written);
}

int	ft_ucase(unsigned int variable, int count)
{
	int		written;
	char	*temps;

	temps = ft_utoa(variable);
	if (!temps)
		return (-1);
	written = write(1, temps, ft_strlen(temps));
	free(temps);
	if (written == -1)
		return (-1);
	return (count + written);
}
