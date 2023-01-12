/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:23:09 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/12 15:52:27 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
        
int	ft_printf(char const *str, ...)
{
    int	i;
    int	aux;	
	va_list args;

	i = 0;
	aux = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			aux += ft_putchar(str[i]);
		else
		{
			i++;
			if(str[i] == 'c')
			   	aux += ft_putchar(va_arg(args, int));
			else if (str[i] == 's')
				aux += ft_putstr(va_arg(args, char*));
			else if (str[i] == 'i' || str[i] == 'd')
                aux += ft_putnbr(va_arg(args, int));
			else if (str[i] == 'x' || str[i] == 'X')
				aux += ft_putnbr_hex(va_arg(args, int), str[i]);
			else if (str[i] == '%')
				aux += ft_putchar('%');
		}
		i++;
		if (aux == -1)
			return (-1);
	}
	va_end(args);
	return (aux);
}

