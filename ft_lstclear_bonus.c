/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:24:36 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:24:38 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	del(void *content)
{
	free(content);
	printf("Content freed\n");
}

static char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*head;
	char	*x;
	char	*y;
	char	*z;

	x = ft_strdup("I");
	y = ft_strdup(" love");
	z = ft_strdup(" phoenixes\n");
	a = ft_lstnew(x);
	head = a;
	b = ft_lstnew(y);
	c = ft_lstnew(z);
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	while (a)
	{
		printf("%s", (char *)a->content);
		a = a->next;
	}
	ft_lstclear(&head, del);
	return (0);
}*/
