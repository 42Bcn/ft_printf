/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:17:17 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/13 16:50:20 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long int n, int nc)
{
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nc++;
		n = -n;
	}
	if (n > 9)
		nc = ft_putnbr(n / 10, nc);
	if (nc == -1)
		return (-1);
	if (write(1, &"0123456789"[n % 10], 1) == -1)
		return (-1);
	nc++;
	return (nc);
}
