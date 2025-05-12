/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:45:55 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 14:43:51 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	q;

	ptr = (unsigned char *)s;
	q = c;
	while (n--)
		*ptr++ = q;
	return (s);
}	

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "No fresh air...";

	ft_memset(str + 3, 'X', 5);
	printf("%s\n", str);
	return (0);
}*/
