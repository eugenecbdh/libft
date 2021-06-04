#include "libft.h"

char *ft_strnew(int size)
{
    int i = 0;
    char *s;
    s = (char*)malloc(size * sizeof (char));
    if(s == NULL)
    {
        printf("\nError\n\n");
    }
    while(i < size)
    {
        s[i] = 0;
        i++;
    }
    return s;
}