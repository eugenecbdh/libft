#include "libft.h"

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++; // while both characters euqal and counter doesn't meet the null - iterate
	}
	return (s1[i] - s2[i]); // if any of the characters are not equal - gonna return the result straight away
	//if all equal the result will be zero anyways 
}