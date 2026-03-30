/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zack <zack@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 02:49:07 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/26 19:24:08 by zack             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_int(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb > 9)
		ft_put_unsigned_int(nb / 10);
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
		i = 1;
	}
	else
	{
		ft_putchar((nb % 10) + 48);
		i = 1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
