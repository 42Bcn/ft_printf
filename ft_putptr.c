/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:46:07 by cvelasco          #+#    #+#             */
/*   Updated: 2023/01/12 15:46:14 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int ft_putchar(int c)
{
    return (write (1, &c, 1));
}

void ft_putptr(void *ptr)
{
    int i;
    char c;

    i = 0;
    c = 0;
    while(i < 11)
    {
        write(1, &ptr[i++], 1);
    }
    printf("\n punter real; %p", ptr);
}

int main()
{
    int a;
    int *b;
    a = 4;
    b = &a;
    
    ft_putptr(&a);
    return (1);
}
