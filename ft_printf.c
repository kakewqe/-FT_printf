/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:34:29 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/30 03:30:43 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_putchar (va_arg(args, int));
	else if (format == '%')
		print += ft_percentage();
	else if (format == 's')
		print += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print += ft_put_int(va_arg(args, int));
	else if (format == 'u')
		print += ft_put_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'p')
		print += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'x' || format == 'X')
		print += ft_print_hex(va_arg(args, unsigned int), format);
	return (print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_check_format(args, format[i + 1]);
			i += 2;
		}	
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
