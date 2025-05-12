/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:41:42 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 10:42:21 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char const c, char const	*set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		++set;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*strtrim;
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && in_set(*s1, set))
		++s1;
	end = s1 + ft_strlen(s1);
	while (end > s1 && in_set(*(end - 1), set))
		--end;
	strtrim = (char *)(malloc(sizeof(char) * (end - s1 + 1)));
	if (!strtrim)
		return (NULL);
	ft_strlcpy(strtrim, s1, end - s1 + 1);
	return (strtrim);
}

/*int	main(void)
{
	char const	*s1 = "   // I am a legend/ / / ";
	char const	*set = " /";
	char		*strtrim;

	strtrim = ft_strtrim(s1, set);
	printf("%s\n", strtrim);
	return (0);
}*/
