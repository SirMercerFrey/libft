/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:41:50 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 17:51:11 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = (void *)(malloc(size * nmemb));
	if (!ptr)
		return (NULL);
	if (nmemb && size)
		ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
		printf("%d\n", tab[i++]);
	return (0);
}*/
