#include "libft.h"

char *ft_strjoin(char *s1, char *s2)
{
    char *new;
    int i = 0, j = 0;
    int length = 0;

    char * p1;
    char * p2;

    p1 = s1;
    p2 = s2;

    while(p1[i] != '\0'){
        i++;
        length++;
    }

    i = 0;
    while(p2[i] != '\0'){
        i++;
        length++;
    }

    new = (char*)malloc((length + 1) * sizeof(char));
    if(new == NULL)
    {
        printf("\n\nMEmoRY ErRor");
        exit(1);
    }

    i = 0;

    while(s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }

    new[i] = ' ';
    i += 1;

    while(s2[j]!= '\0')
    {
        new[i] = s2[j];
        i++;
        j++;
    }
    new[i] = '\0';

    return new;
}