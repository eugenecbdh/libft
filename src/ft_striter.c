#include "libft.h"

void ft_striter(char *s, void(*ft)(char *))
{
    while(*s != '\0')
    {
        ft(*s);
        s++;
    }
}