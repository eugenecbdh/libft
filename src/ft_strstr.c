#include "libft.h"

char *ft_strstr(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] != '\0') 
    {
        j = 0;
        while(s2[j] == s1[i + j])
        {
            if(s2[j + 1] == '\0')
            {
                return(&s1[i]);
            }
            j++;
        }
        i++; 
    }
    return 0;
}