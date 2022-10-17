#include "ft_printf.h"

void ft_printf(char *, ...);              //Our printf function
char* convert(unsigned int, int);       //Convert integer number into octal, hex, etc.


int main(void) 
{ 
    Myprintf(" WWW.FIRMCODES.COM \n %d hola", 9); 
    return 0;
} 

void ft_putchar()

void ft_printf(char *format, ...)
{
    int i;

    while (format[i] && format[i] != '\0')
    {
        while (format[i] != '%')
        {
            write(1, &format[i], 1);
            i++;
        }
        i++;

        if(format[i] == 'c')
        {

        }
        else if (format[i] == 's')
        {

        }
        else if (format[i] == 'o')
        {
            
        }
        else if (format[i] == 'i')
        {

        }
        else if (format[i] == 'u')
        {

        }
        else if (format[i] == 'x')
        {

        }
        else if (format[i] == 'X')
        {

        }
        else if (format[i] == '%')
        {

        }
    }
}

void Myprintf(char* format, ...) 
{ 
    char *traverse; 
    unsigned int i; 
    char *s; 

    //Module 1: Initializing Myprintf's arguments 
    va_list arg; 
    va_start(arg, format); 

    for(traverse = format; *traverse != '\0'; traverse++) 
    { 
        while( *traverse != '%' ) 
        { 
            putchar(*traverse);
            traverse++; 
        } 

        traverse++; 

        //Module 2: Fetching and executing arguments
        switch(*traverse) 
        { 
            case 'c' : i = va_arg(arg,int);     //Fetch char argument
                        putchar(i);
                        break; 

            case 'd' : i = va_arg(arg,int);         //Fetch Decimal/Integer argument
                        if(i < 0) 
                        { 
                            i = -i;
                            putchar('-'); 
                        } 
                        puts(convert(i,10));
                        break; 

            case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation
                        puts(convert(i,8));
                        break; 

            case 's': s = va_arg(arg,char *);       //Fetch string
                        puts(s); 
                        break; 

            case 'x': i = va_arg(arg,unsigned int); //Fetch Hexadecimal representation
                        puts(convert(i,16));
                        break; 
        }   
    } 

    //Module 3: Closing argument list to necessary clean-up
    va_end(arg); 
} 