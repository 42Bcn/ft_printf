#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    /* Si no existeix retur "(null)" -> equival a 6 */
    if (!str)
        return (-1);
    while (str[i])
    {
        if (ft_putchar(str[i]))
            return (-1);
        i++;
    }
    return (i);
}