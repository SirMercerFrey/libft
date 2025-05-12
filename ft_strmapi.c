/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:54:54 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 11:55:20 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	block_letters(unsigned int	i, char c)
{
	if (c >= 'a' && c <= 'z' && i % 2 == 1)
		return (c + 'A' - 'a');
	return (c);
}*/

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*int	main(int argc, char ** argv)
{
	char	*strmapi;
	if (argc > 1)
	{
		printf("%s\n", argv[1]);
		strmapi = ft_strmapi(argv[1], block_letters);
		printf("%s\n", strmapi); 
		free(strmapi);
	}
	return (0);
}*/
