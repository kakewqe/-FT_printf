/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zack <zack@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:35:31 by zachamou          #+#    #+#             */
/*   Updated: 2023/05/29 09:24:49 by zack             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> 
# include <limits.h>
# include <unistd.h>
# include <strings.h>
# include <stdlib.h>
# include <stdint.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_put_int(int nb);
int	ft_put_unsigned_int(unsigned int nb);
int	ft_print_ptr(unsigned long long int ptr);
int	ft_print_hex(int unsigned nb, const char format);
int	ft_percentage(void);

#endif
