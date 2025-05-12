/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:57:49 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 12:00:19 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	to_x(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'X';
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", argv[1]);
		ft_striteri(argv[1], to_x);
		printf("%s\n", argv[1]);
	}
	return (0);
}*/
