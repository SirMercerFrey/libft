/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:53:46 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 10:30:18 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)(big));
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
			++j;
		if (!little[j])
			return ((char *)(&big[i]));
		++i;
	}
	return (NULL);
}

/*int main(void)
{
    char const  *big = "J'aime le chocochocolat.";

    char const  *little = "chocolat";
    char    *strnstr;

    strnstr = ft_strnstr(big, little, 50);
    if (strnstr)
        printf("%s\n", strnstr);
    return (0);
}*/
