/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:22:09 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/30 00:22:15 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_hex(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	char	*hex;

	if (num == 0)
		return ;
	hex = ft_itoa_base(num, 16);
	if (hex)
	{
		if (format == 'X')
			ft_strtoupper(hex);
		ft_putstr(hex);
		free(hex);
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
	{
		ft_put_hex(num, format);
		return (ft_strlen_hex(num));
	}
}
/*
int main()
{
    int test = 10;

    printf("real :%X\n", test);
    ft_printf("my : %X\n", test);
}   
*/
