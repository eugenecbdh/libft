#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i = 0;
    int result = 1;

    //if(strlen(s1) != (strlen(s2)))
      //  return 0;

    while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
        i++;
	}
	return (1);
}