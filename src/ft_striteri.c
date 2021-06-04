#include "libft.h"

void ft_striteri(char *s, void (*ft)(int, char *))
{
    int i = 0;
    int *p = &i;

    while(*s != '\0')
    {
        ft(*p, *s);
        s++;
        i++;
    }
}