/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:30:05 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 15:46:08 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n--)
	{
		if (*ptr1++ != *ptr2++)
			return (*--ptr1 - *--ptr2);
	}
	return (0);
}

/*int	main(void)
{
	const char	*s1 = "All these open windows";
	const char	*s2 = "All these open zindows";

	printf("%d\n", ft_memcmp(s1, s2, 50));
	return (0);
}*/
