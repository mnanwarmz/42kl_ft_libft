#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;

	while (*lst != NULL && del != NULL)
	{
		item = (*lst);
		ft_lstdelone(item, del);
		item = (*lst)->next;
	}
}
