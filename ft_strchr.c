/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:06:53 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 15:25:17 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	q;

	q = c;
	while (*s)
	{
		if (*s == q)
			return ((char *)(s));
		++s;
	}
	if (q == '\0')
		return ((char *)(s));
	return (NULL);
}

/*int	main(void)
{
	const char *s = "Je suis un chevalier !!";
	
	printf("%s\n", ft_strchr(s, 'i'));
	return (0);
}*/
