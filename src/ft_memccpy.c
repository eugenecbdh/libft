#include "libft.h"

void *ft_memccpy(void *dest, void *s, int c, int n)
{
    int i = 0;

    while(i < n)
    {
        ((char*)dest)[i] = ((char*)s)[i];
        i++;
        if(((char*)s)[i] == c)
            return dest;
    }
}