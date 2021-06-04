#include "libft.h"

int ft_strlen(char *s)
{
    int length = 0;

    while(*s != 0 && *s != '\0')
    {
        ++s;
        ++length;
    }

    return length;
}