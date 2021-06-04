#include "libft.h"

void *ft_memset(void *s, int c, int n)
{
    int i = 0;
    while(i<n)
    {
        ((char *) s)[i++] = c;
    }
    return s;
}