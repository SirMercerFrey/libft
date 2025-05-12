/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:23:45 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:23:47 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	del(void	*content)
{
	printf("Deleting content !\n");
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	t_list	*a;
	char	*str;

	str = malloc(7);
	if (!str)
		return (1);
	ft_strlcpy(str, "Rate!\n", 7);
	a = ft_lstnew(str);
	printf("%s", (char *)a->content);
	ft_lstdelone(a, del);
	return (0);
}*/
