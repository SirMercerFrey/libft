/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:22:21 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 16:38:00 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("Je");
	b = ft_lstnew(" est ");
	c = ft_lstnew("un autre.\n");
	ft_lstadd_front(&b, a);
	ft_lstadd_back(&a, c);
	while (a)
	{
		printf("%s", (char *)a->content);
		a = a->next;
	}	
	return (0);
}*/
