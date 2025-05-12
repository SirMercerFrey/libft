/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:04:33 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 16:55:47 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (s[len])
		++len;
	dup = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!dup)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = s[i];
		++i;
	}
	return (dup);
}

/*#include <stdio.h>
int	main(void)
{
	char	*src = "Morgnou chouchou";		
	char	*dup;

	dup = ft_strdup(src);
	printf("%s\n", src);
	return (0);
}*/
