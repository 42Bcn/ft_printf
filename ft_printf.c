/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:23:09 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/15 13:31:09 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(va_list args, char c)
{
	int	aux;

	aux = 0;
	if (c == 'c')
		aux += ft_putchar(va_arg(args, int));
	else if (c == 's')
		aux += ft_putstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		aux += ft_putnbr(va_arg(args, int), aux);
	else if (c == 'u')
		aux += ft_putnbr(va_arg(args, unsigned int), aux);
	else if (c == 'x' || c == 'X')
		aux += ft_putnbr_hex(va_arg(args, int), c);
	else if (c == 'p')
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		aux += ft_putptr(va_arg(args, unsigned long int));
		if (aux == -1)
			return (-1);
		aux += 2;
	}	
	else if (c == '%')
		aux += ft_putchar('%');
	return (aux);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		aux;
	int		res;

	i = 0;
	aux = 0;
	res = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			aux = ft_putchar(str[i]);
		else
		{
			i++;
			aux = ft_print_args(args, str[i]);
		}
		i++;
		if (aux == -1)
			return (-1);
		res += aux;
	}
	va_end(args);
	return (res);
}
