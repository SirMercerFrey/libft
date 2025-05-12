/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:17:48 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 13:30:19 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", ft_isascii(argv[1][0]));
	return (0);
}*/
