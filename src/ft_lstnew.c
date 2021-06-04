#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list * new;

    new = (t_list*)malloc(sizeof (t_list));
    if(new = NULL)
        return NULL;
    
    if(content == 0)
        new->content = NULL;

    new->content_size = 0;
    new->next = NULL;

    return new;

}