/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:42:48 by skawanis          #+#    #+#             */
/*   Updated: 2023/03/26 22:42:50 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	handle_format(char type, va_list list)
{
	if (type == 'd' || type == 'i')
	{
		return (ft_putnbr_fd(va_arg(list, int), 1));
	}
	if (type == 'c')
		return (ft_putchar_fd(va_arg(list, int), 1));
	if (type == 's')
		return (ft_putstr_fd(va_arg(list, char *), 1));
	if (type == 'u')
		return (ft_putuint_fd(va_arg(list, unsigned int), 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	const size_t	fmt_len = ft_strlen_s(fmt);
	size_t			i;
	va_list			list;
	ssize_t			printed_count;

	printed_count = 0;
	va_start(list, fmt);
	i = 0;
	while (i < fmt_len)
	{
		while (fmt[i] != '\0' && fmt[i] != '%')
		{
			printed_count += ft_putchar_fd(fmt[i], 1);
			i++;
		}
		printed_count += handle_format(fmt[i + 1], list);
		i += 2;
	}
	va_end(list);
	return (printed_count);
}
