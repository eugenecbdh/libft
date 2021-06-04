#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    while(*s != '\0')
    {
        s++;
    }
    while(*s != c)
    {
        s--;
    }
    return ((char*)s);
}