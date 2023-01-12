/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:34 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/12 19:12:19 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
static	int	ft_write_num(int n, int nchar, int c)
{
    char *hex;
	int num;

    hex = "0123456789abcdef";
        if (c == 'X')
            hex = "0123456789ABCDEF";

	num = (int) n % 16;
	n /= 16;
	if (n)
		nchar = ft_write_num(n, nchar, c);
	if (ft_putchar(hex[num]) == -1)
		return (-1);
	nchar++;
	return (nchar);
}

int ft_putnbr_hex(unsigned int n, int c)
{
    int nchar;

    nchar = 0;
    nchar = ft_write_num(n, nchar, c);
	if (nchar == -1)
		return (-1);
    return (nchar);
}
*/

int ft_putnbr_hex(unsigned int n, int c)
{
	char	*hex;
	int		bytes;
	int		aux;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	bytes = 0;
	aux = 0;
	if (n > 15)
	{
		ft_putnbr_hex(n / 16, c);
		if (aux == -1)
			return (-1);
		bytes += aux;
	}
	aux = ft_putchar(hex[n % 16]);
	if (aux == -1)
		return (-1);
	bytes += aux;
	return (bytes);
}

