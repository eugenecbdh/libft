#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    int i, length = 0;

    while(s[length])
        length++;

    dup = (char*)malloc(sizeof(*dup) * (length + 1));

	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
    return dup;
}