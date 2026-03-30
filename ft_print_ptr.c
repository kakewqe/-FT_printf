/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:13:58 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/30 00:36:03 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
	{
		len += ft_put_pointer(ptr / 16);
		len += ft_put_pointer(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + 48);
		else
			ft_putchar(ptr - 10 + 'a');
		len++;
	}
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = write(1, "0x", 2);
	len += ft_put_pointer(ptr);
	return (len);
}

/*
#include <limits.h>
int main(void)
{
    unsigned long long ptr = 0;

    //printf("printf: %p %p\n", (void *)ptr, (void *)ptr);
	//ft_printf("MY printf: %p %p \n", (void *)ptr, (void *)ptr);

	printf("printf: %p %p\n",  LONG_MIN, LONG_MAX);
	ft_printf("MY printf: %p %p \n", LONG_MIN, LONG_MAX);


    return 0;
}
*/
