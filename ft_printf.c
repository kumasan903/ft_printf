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

void handle_format(char type, va_list list)
{
	if (type == 'd' || type == 'i')
	{
		ft_putnbr_fd(va_arg(list, int), 1);
	}
}

int	ft_printf(const char *fmt, ...)
{
	const size_t	fmt_len = ft_strlen_s(fmt);
	size_t	i;
	va_list	list;

	va_start(list, fmt);
	i = 0;
	while (i < fmt_len)
	{
		while (fmt[i] != '\0' && fmt[i] != '%')
		{
			ft_putchar_fd(fmt[i], 1);
			i++;
		}
		handle_format(fmt[i + 1], list);
		i += 2;
	}
	va_end(list);
	return (0);
}
