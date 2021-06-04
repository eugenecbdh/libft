#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(int, char))
{
	char *new;
	int i;

	if (!s || !f)
		return NULL;
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return new;
}