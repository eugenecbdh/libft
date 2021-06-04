#include "libft.h"

char *ft_strcat(char *dest, char *s)
{
    int i = 0;
	while (dest[i])
		i++;
	while (*s)
		dest[i++] = *s++;
	dest[i] = '\0';
	return (dest);
}