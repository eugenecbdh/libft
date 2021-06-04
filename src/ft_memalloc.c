#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *temp;
	temp = malloc(size);

	if (temp <= 0)
		return (NULL);
        
	ft_bzero(temp, size);
	return (temp);
}