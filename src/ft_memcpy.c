#include "libft.h"

void *ft_memcpy(void *dest, void *s, int n)
{
    int i = 0;

    while(i<n)
    {
        ((char*)dest)[i] = ((char*)s)[i];
        i++;
    } 
}