#include "libft.h"

int ft_atoi(char *s)
{
    int i = 0;
    int n = 0;
    int length = 0;
    char * temp;
    temp = s;

    while(*s != '\0')
    {
        s++;
        length++;
    }
    while(i < length)
    {
        n = n * 10;
        printf("\n int value %d", n);
        n = n + (temp[i] - '0');
        i++;
    }
    
    return n;
}