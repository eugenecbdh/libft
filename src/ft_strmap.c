#include "libft.h"

char *ft_strmap(const char *s, char (*ft)(char))
{
    int i = 0;

    while(s[i] != '\0')
    {
        ft(s[i]);
        i++;
    }
    return s;
}