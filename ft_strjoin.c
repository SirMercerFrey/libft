/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:39:43 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 10:40:34 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	strjoin = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, len + 1);
	ft_strlcat(strjoin, s2, len + 1);
	return (strjoin);
}

/*int	main(void)
{
	char const	*s1 = "I'm in love ";
	char const	*s2 = "with a phoenix.";
	char		*strjoin;

	strjoin = ft_strjoin(s1, s2);
	printf("%s\n", strjoin);
}*/
