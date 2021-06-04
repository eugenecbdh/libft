#include "libft.h"

void *ft_memchr(void *s1, int c, size_t n)
{
    int i = 0;

    while(i < n)
        if(((char*)s1)[i] != c)
            i++;
        else
            return ((char*)s1)[i];
}