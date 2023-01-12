/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:43:14 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/12 16:46:52 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
#include <unistd.h>

int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putnbr_hex(unsigned int n, int c);
void	ft_putptr(void *ptr);
int		ft_printf(char const *str, ...);

#endif
