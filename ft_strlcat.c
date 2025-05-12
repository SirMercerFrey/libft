/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:48:28 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 14:56:07 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dest[dlen] && dlen < size)
		++dlen;
	slen = 0;
	while (src[slen])
		++slen;
	if (dlen >= size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i < size -1)
	{
		dest[dlen + i] = src[i];
		++i;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*int	main(void)
{
	char	*src = "Yeah";
	char	dest[100] = "Oh oh ";

	ft_strlcat(dest, src, 45);
	printf("%s\n", dest);
	return (0);
}*/
