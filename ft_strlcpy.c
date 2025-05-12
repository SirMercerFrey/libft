/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:42:14 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 14:53:11 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
		++len;
	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	const char	*src = "Jad est de retour";
	char	dest[20];

	ft_strlcpy(dest, src, 8);
	printf("%s\n", dest);
	return (0);
}*/
