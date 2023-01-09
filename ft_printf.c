#include "ft_printf.h"
        
int ft_printf(char const *str, ...);

int main(void) 
{ 
    ft_printf("carla %c haolaafsd", 'k');
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
            aux +=ft_putchar(str[i]);
        else
        {
            i++;
            if(str[i] == 'c')
                aux += ft_putchar(va_arg(args, int));
            else if (str[i] == 's')

        /*
        else if (str[i] == 'i')
        else if (str[i] == 'p')
        else if (str[i] == 'u')
        else if (str[i] == 'x')
        else if (str[i] == 'X')
        else if (str[i] == '&')
        */
        }
        i++;
        if (aux == -1)
            return (-1);
    }
    va_end(args);
    return (aux);
}
