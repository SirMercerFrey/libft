/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:22:25 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 17:30:18 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest && !src && n != 0)
		return (NULL);
	d = dest;
	s = src;
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[] = "Heads will roll.";

	ft_memmove(src + 5, src, 5);
	printf("%s\n", src);
	return (0);
}*/
