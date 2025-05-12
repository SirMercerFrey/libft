/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:20:54 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 15:35:54 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (!s1[i])
			break ;
		++i;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s1 = "Nope";
	const char	*s2 = "Nopi";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	return (0);
}*/
