#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*head;
	t_list	*tmp;

	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);

	head = tmp; 
	while (lst->next != NULL) 
	{
		lst = lst->next;
		tmp->next = f(lst); 
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (head);
}