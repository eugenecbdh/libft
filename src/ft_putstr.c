#include "libft.h"

void ft_putstr(char *s)
{
    while(*s != '\0')
    {
        ft_putchar(s);
        s++;
    }
}