#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
    int i = 0;
    char *dest = s1;
    char *src = s2;

    if(s1 > s2)
        while(i < n)
        {
            dest[i] = src[i];
            i++;
        }
    else
    {
        ft_memcpy(s1,s2,n);
    }
    
    return s1;
}