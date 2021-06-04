#include "libft.h"

void ft_bzero(void *s, int n)
{
    int i = 0; 
    char * temp;
    temp = (char *)s;

    while(i < n)
    {
        {
            temp[i] = 0;
        }
        i++;
    }
}