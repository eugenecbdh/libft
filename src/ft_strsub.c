#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *new;
    int i = 0;

    char * p1;
    p1 = s;

    new = (char*)malloc((len + 1) * sizeof(char));
    if(new == NULL)
    {
        printf("\nError");
        exit(1);
    }

    while(i <= len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[i] = '\0';

    return new;
}