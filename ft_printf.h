/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:48:08 by ikalach           #+#    #+#             */
/*   Updated: 2025/11/07 16:52:37 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# if defined(__linux__)
#  define PTRNULL "(nil)"
# elif defined(__APPLE__)
#  define PTRNULL "0x0"
# endif

int		ft_printf(const char *fmt, ...);
char	*ft_itoa_base_unsigned(unsigned long num, int base);
char	*ft_utoa(int n);
int		ft_dicase(int variable, int count);
int		ft_ccase(int variable, int count);
int		ft_scase(char *variable, int count);
int		ft_pcase(void *variable, int count);
int		ft_ucase(unsigned int variable, int count);
int		ft_xcase(unsigned int variable, int count, char string);
int		ft_emptycase(int count, char string);
int		handle_format_case(char spec, va_list *args, int count);

#endif
