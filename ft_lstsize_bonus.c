/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:13:28 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:13:32 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		++i;
		list = list->next;
	}	
	return (i);
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew((int *)1);
	b = ft_lstnew((int *)5);
	c = ft_lstnew((int *)42);
	ft_lstadd_front(&c, b);
	ft_lstadd_front(&b, a);
	printf("%d\n", (int)ft_lstsize(a));
	return (0);
}*/
