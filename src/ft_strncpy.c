#include "libft.h"

char *ft_strncpy(char *dest, char *s, int n)
{
    int i = 0;
    while(i < n && *s != '\0')
    {
        i++;
        dest[i] = s[i];
    }
    while(i < n)
    {
        i++;
        dest[i] = '\0';
    }

    return dest;
}