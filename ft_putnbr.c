/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:17:17 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/20 09:27:12 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/* static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	int	ft_writenum(int n)
{
	char	num;
    int     bytes;

	num = ft_abs((n % 10)) + '0';
	n /= 10;
	if (n)
		ft_writenum(n);
	bytes += write(1, &num, 1);
    return (bytes);
}

int	ft_putnbr(int n)
{
    int bytes;

    bytes = 0;
	if (n < 0)
		bytes += write(1, "-", 1);
	bytes += ft_writenum(n);
    return(bytes);
} */


int	ft_putchar(int c)
{
	if (write (1, &c, 1) != 1)
		return (-1);
	return (1);
}

static int	int_min(int n)
{
	(void)n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int n)
{
	int	let;

	let = 0;
	if (n == -2147483648)
		return (int_min(n));
	if (n < 0 && ++let)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		let += ft_putnbr(n / 10);
		if (let == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar (('0' + n)) == -1)
			return (-1);
		let++;
	}
	return (let);
}

int main (void)
{
    printf("tipo retorno; %d", ft_putnbr(-155));
    return (0);
}
