/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:40:44 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 11:50:27 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_int(int n)
{
	int			nb;
	long int	nbr;

	nbr = n;
	nb = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		++nb;
		nbr *= -1;
	}
	while (nbr)
	{
		nbr /= 10;
		++nb;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	long int	nbr;

	nbr = n;
	len = nb_int(nbr);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[0] = '0';
	result[len--] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		result[len] = nbr % 10 + '0';
		nbr /= 10;
		--len;
	}
	return (result);
}

/*int	main(void)
{
	int		i;
	char	*str;

	i = -42;
	str = ft_itoa(i);
	printf("%s\n", str);
	return (0);
}*/
