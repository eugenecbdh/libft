#include "libft.h"

char *ft_strcpy(char *dest, char *s)
{
    while(*s != 0 && *s !='\0')
    {
        *dest = *s;
        ++s;
        ++dest;
    }
    return dest;
}