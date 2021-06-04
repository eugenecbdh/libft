#include "libft.h"

int new_length(char *s)
{
    int i = 0, count = 0, len = 0;
    char *p = s;
    char tab = '\t', space = ' ', newl = '\n';

    while(p[i] != '\0')
    {
        len++;
        i++;
    }

    i = 0;
    p = s;

    while(p[i] == tab || p[i] == space || p[i] == newl && p[i] != '\0')
    {
        i++;
        count++;
        if(p[i] != tab && p[i] != space && p[i] != newl)
            break;
    }

    i = len;
    p = s;

    while(i>0)
    {
            if(p[i] == tab || p[i] == space || p[i] == newl)
                count++;
            i--;
            if(p[i] != tab && p[i] != space && p[i] != newl) 
                break;
    }

    len = len - count;
    len += 1;
    return len;
}

char *trim(char *s, int len)
{
    int i = 0;
    char *new;
    char tab = '\t', space = ' ', newl = '\n';
    int j = 0;

    new = (char*)malloc((len) *sizeof(char));
    if(new == NULL)
    {
        printf("\n\n -- Memory error -- ");
    }

    while(s[i] == tab || s[i] == space || s[i] == newl && s[i] != '\0')
    {
        i++;
        if(s[i] != tab && s[i] != space && s[i] != newl)
            break;
    }

    while(j < len)
    {
        new[j] = s[i];
        j++;
        i++;
    }
    new[j] = '\0';

    return new;
}

char * ft_strtrim(char *s)
{
    char *p = s;
    char * new; 
    int len = new_length(s);
    new = trim(s, len);
    return new;
}