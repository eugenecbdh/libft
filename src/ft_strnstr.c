#include "libft.h"

char *ft_strnstr(char *s1, char *s2, int n)
{
    int i = 0;
    int j = 0;

    while(s2[j] != '\0' && i < n)
    {
        j = 0;
        {
            if(s2[j] == s1[i + j])
            {
                while((i+j) < n && s1[i + j] == s2[j])
                {
                    j++;
                    if(s2[j] == '\0')
                        return(&s1[i]);
                }
            }
        }
        i++;
    }
    return 0;
}