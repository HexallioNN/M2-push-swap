/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:52:57 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/07 13:58:54 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	count_digits_unsigned(unsigned long n, int base)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

char	*ft_itoa_base_unsigned(unsigned long num, int base)
{
	char	*digits;
	int		len;
	char	*str;
	int		i;

	digits = "0123456789abcdef";
	len = count_digits_unsigned(num, base);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		str[i] = digits[num % base];
		num /= base;
		i--;
	}
	return (str);
}

char	*ft_utoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		i;

	nb = n;
	if (n < 0)
	{
		nb = 4294967296 + nb;
	}
	len = count_digits_unsigned(nb, 10);
	i = len - 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
