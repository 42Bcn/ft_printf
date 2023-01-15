/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:08:35 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/13 17:33:08 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int n)
{
	char	*hex;
	int		bytes;
	int		aux;

	hex = "0123456789abcdef";
	bytes = 0;
	aux = 0;
	if (n > 15)
	{
		aux = ft_putptr(n / 16);
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
