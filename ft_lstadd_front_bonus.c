/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:12:35 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:12:39 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("ma couille !");
	b = ft_lstnew("Salut ");
	ft_lstadd_front(&a, b);
	while (b) 
	{
		printf("%s", (char *)b->content);
		b = b->next;
	}
}*/
