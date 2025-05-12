/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:25:54 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:25:55 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	plus_un(void *ptr)
{
	int	*i;

	i = (int *)ptr;
	*i += 1;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}		

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	int	*x;
	int	*y;

	x = malloc(sizeof(int));
	if (x)
		*x = 0;
	y = malloc(sizeof(int));
	if (y)
		*y = 3;
	a =	ft_lstnew(x);
	b = ft_lstnew(y);
	ft_lstadd_back(&a, b);
	ft_lstiter(a, plus_un);
	while (a)
	{
		printf("%d\n", *(int *)a->content);
		a = a->next;
	}
	return (0);
}*/
