/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:29:34 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/13 17:32:39 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, char c)
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
		aux = ft_putnbr_hex(n / 16, c);
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
