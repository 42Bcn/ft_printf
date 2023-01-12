/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:17:17 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/12 15:47:39 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	int	ft_write_num(int n, int nchar)
{
	char	num;

	num = ft_abs(n % 10) + '0';
	n /= 10;
	if (n)
		nchar = ft_write_num(n, nchar);
	if (ft_putchar(num) == -1)
		return (-1);
	nchar++;
	return (nchar);
}

int	ft_putnbr(int n)
{
	int	nchar;

	nchar = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nchar++;
	}
	nchar = ft_write_num(n, nchar);
	return (nchar);
}

