/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:43:14 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/15 13:31:38 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(int c);
int		ft_putnbr(long long int n, int nc);
int		ft_putstr(char *str);
int		ft_putnbr_hex(unsigned int n, char c);
int		ft_printf(char const *str, ...);
int		ft_putptr(unsigned long int n);

#endif
