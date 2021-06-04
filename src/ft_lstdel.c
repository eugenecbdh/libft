#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list	*tmp;
    tmp = *alst;

	while (tmp != NULL)
	{
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = tmp->next;
	}
	
	*alst = NULL;

}