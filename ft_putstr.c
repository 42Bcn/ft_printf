/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:21:21 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/09 15:21:33 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (write(1, "(null)", 6));
    while (str[i])
    {
        if (ft_putchar(str[i]) == -1)
            return (-1);
        i++;
    }
    return (i);
}
