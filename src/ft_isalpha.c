#include "libft.h"

int ft_isalpha(int a)
{
    return ((a>64 && a<91 || a>96 && a<123)); 
}