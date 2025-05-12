/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:29:56 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 16:56:24 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*end;

	end = str;
	while (*end)
		++end;
	return (end - str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", ft_strlen(argv[1]));
	return (0);
}*/
