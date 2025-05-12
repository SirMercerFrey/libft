/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:01:16 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/02 13:32:30 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", ft_isalnum(argv[1][0]));
	return (0);
}*/
