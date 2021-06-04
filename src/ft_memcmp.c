#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    int i = 0;
    char *temp1 = (char*)s1;
    char *temp2 = (char*)s2;


    while(i < n)
    {
        if(temp1[i] != temp2[i])
        {
            return temp1[i] - temp2[i];
        }
        i++;
    }
    return 0;
}