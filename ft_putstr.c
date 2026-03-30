/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:32:50 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/30 01:23:34 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (write (1, "(null)", 6));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

/*
int main(void)
{
	char str[] = "0123 qwerrt";
 
    ft_printf("my ; %s\n", str);
	printf("my : %s\n", str);

	ft_printf("real : %s\n", NULL);
	printf("real : %s\n", NULL);
}	
*/