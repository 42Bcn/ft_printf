/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:23:09 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/09 15:23:11 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
        
int ft_printf(char const *str, ...);

int main(void) 
{ 
    printf(" num caracteres %d\n", ft_printf("%d", -1789));
    printf(" num caracteres %d\n", printf("%d", -1789));
    return 0;
} 

int ft_printf(char const *str, ...)
{
    int i;
    int aux;

    i = 0;
    aux = 0;

    va_list args;
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

/*
else if (str[i] == 'u')
else if (str[i] == 'p')
else if (str[i] == 'x')
else if (str[i] == 'X')
else if (str[i] == '&')
*/