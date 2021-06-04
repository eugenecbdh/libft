#include "libft.h"

char *ft_strncat(char *dest, char *s, int n)
{
    int	i = 0;
	int	len = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n && s[i] != '\0')
	{
		dest[len] = s[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return dest;
}