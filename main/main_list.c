/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:16:45 by ktiong            #+#    #+#             */
/*   Updated: 2021/05/03 11:16:45 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	putarr(char **tab)
{
	int		i;

	i = 0;
	printf("Let's see the array :\n");
	if (!tab || !tab[i])
	{
		printf("tab[0] : |(null)|\n\n");
		return ;
	}
	while (tab[i])
	{
		printf("tab[%i] : |%s|\n", index, tab[i]);
		i++;
	}
	printf("\n");
}
void	freestr(char *s1, char *s2, char *d1, char *d2)
{
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	if (d1)
		free(d1);
	if (d2)
		free(d2);
}

void	freearr(char **tab)
{
	int	i;

	i = 0;
	printf("coucou 0\n");
	if (!tab)
		return ;
	printf("coucou 1\n");
	while (tab[i])
	{
		printf("free tab[%i] : |%s|\n sizeof : %li, ptr : %p\n",
				i, tab[i], sizeof(tab[i]), tab[i]);
		if (tab[i])
			free(tab[i]);
		printf("coucou 3\n\n");
		i++;
	}
	printf("coucou 4\n");
	printf("free tab[%i] : |%s|\n", i, tab[i]);
	free(tab);
}

void	ft_free(void *c)
{
	free(c);
}

void	putstr(void *c)
{
	char	*str;

	str = (char *)c;
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" ", 1);	
}

void	*ft_neg(void *c)
{
	char	*str;

	str = ft_calloc(sizeof(char), ft_strlen((char *)c) + 2);
	str[0] = '-';
	str[1] = *(char *)c;
	return ((void *)str);
}
void	ft_print(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		printf("node empty\n");
	while (lst)
	{
		printf("node %i : |%s|\n", i, (char *)lst->content);
		i++;
		lst = lst->next;
	}
}
int		test(void)
{
	t_list	*lst;
	t_list	*tmp;
	t_list	*tmp2;

	printf("=================================\n1 : ft_lstnew\n=================================\n");
	lst = ft_lstnew(ft_strdup("4"));
	ft_print(lst);

	printf("=================================\n2 : ft_lstadd_front\n=================================\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));
	ft_print(lst);

	printf("=================================\n3 : ft_lstadd_back\n=================================\n");
	tmp = lst;
	ft_lstadd_back(&tmp, ft_lstnew(ft_strdup("5")));
	ft_print(tmp);

	printf("=================================\n4 : ft_lstlast\n=================================\n");
	tmp = ft_lstlast(lst);
	printf("last element : |%s|\n", (char *)tmp->content);

	printf("=================================\n5 : ft_lstsize\n=================================\n");
	printf("lstsize : %i\n", ft_lstsize(lst));

	printf("=================================\n6 : ft_lstdelone\n=================================\n");
	printf("\nlist fill :\n");
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("0")));
	ft_print(lst);
	tmp = lst->next->next;
	tmp2 = tmp->next;
	ft_lstdelone(tmp, &ft_free);
	lst->next->next = tmp2;
	ft_print(lst);

	printf("=================================\n7 : ft_lstclear\n=================================\n");
	tmp = lst->next->next;
	ft_lstclear(&tmp, &ft_free);
	lst->next->next = tmp;
	ft_print(lst);

	printf("\nfill list :\n");
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("5")));
	ft_print(lst);

	printf("=================================\n8 : ft_lstiter\n=================================\n");
	ft_lstiter(lst, &putstr);


	printf("\n=================================\n9 : ft_lstmap\n=================================\n");
	printf("\n\nlstmap :\n");
	tmp = ft_lstmap(lst, &ft_neg, &ft_free);
	printf("original list :\n");
	ft_print(lst);
	printf("\nmodified list :\n");
	ft_print(tmp);

}

int main(void){
    test();
}
