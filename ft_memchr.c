/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:26:38 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 15:40:27 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int v, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		if (*ptr++ == (unsigned char)(v))
			return ((void *)(--ptr));
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s = "Que cherchez-vous ?";

	printf("%s\n", (char *)ft_memchr(s, '?', 100));
	return (0);
}*/
