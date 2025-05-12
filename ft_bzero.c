/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:49:14 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 14:44:12 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "XXXXXXXXXXXXXXXX";

	ft_bzero(str + 3, 5);
	printf("%s\n", str);
	return (0);
}*/
