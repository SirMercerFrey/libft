/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:26:46 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 18:15:23 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}

static void	*plus_un_alloc(void *ptr)
{
	int	*i;

	i = malloc(sizeof(int));
	if (!i)
		return (NULL);
	*i = *(int *)ptr + 1;
	return (i);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}	

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*head;
	int	*x;
	int	*y;
	int	*z;

	x = malloc(sizeof(int));
	if (x)
		*x = 0;
	y = malloc(sizeof(int));
	if (y)
		*y = 3;
	z = malloc(sizeof(int));
		*z = 42;
	a =	ft_lstnew(x);
	b = ft_lstnew(y);
	c = ft_lstnew(z);
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	head = ft_lstmap(a, plus_un_alloc, del);
	while (a)
	{
		printf("%d\n", *(int *)a->content);
		a = a->next;
	}
	while (head)
	{
		printf("%d\n", *(int *)head->content);
		head = head->next;
	}
	return (0);
}*/
