#include "libft.h"

int isalnum(int a)
{
    if(a>=0 && a<=9 || a>64 && a<91 || a>96 && a<123)
        return 1;
    else
        return 0;
}