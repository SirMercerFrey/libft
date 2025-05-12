/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:15:45 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 18:07:21 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	c = c % 256;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		++s;
	}
	if (c == '\0')
		return ((char *)(s));
	return ((char *)(last));
}

/*int	main(void)
{
	const char	*s = "Je suis un chevalier.";

	printf("%s\n", ft_strrchr(s, 'i'));
	return (0);
}*/
