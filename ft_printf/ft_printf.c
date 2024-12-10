/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <lli2@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:43:26 by lli2              #+#    #+#             */
/*   Updated: 2024/12/10 11:16:51 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static int	handle_conversion(const char **format, va_list args)
{
	char	c;

	(*format)++;
	if (**format == 'c')
	{
		c = (char)va_arg(args, int);
		ft_putchar_fd(c, 1);
	}
	else if (**format == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (**format == 'p')
		ft_pointer(va_arg(args, void *));
	else if ((**format == 'i') || (**format == 'd'))
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (**format == 'u')
		ft_putusnbr_fd(va_arg(args, int), 1);
	else if (**format == 'x')
		ft_puthex(va_arg(args, unsigned long), 0);
	else if (**format == 'X')
		ft_puthex(va_arg(args, unsigned long), 1);
	else if (**format == '%')
		write(1, "%", 1);
	(*format)++;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += handle_conversion(&format, args);
		else
			count += write(1, format++, 1);
	}
	va_end(args);
	return (count);
}
