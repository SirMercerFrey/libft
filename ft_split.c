/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:43:18 by mcharret          #+#    #+#             */
/*   Updated: 2025/05/05 14:48:20 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	int		in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			++words;
			in_word = 1;
		}
		if (*s == c)
			in_word = 0;
		++s;
	}
	return (words);
}

static void	freedom_split(char **split, size_t i)
{
	while (i--)
		free(split[i]);
	free(split);
}

static char	**liminal_split(char **split, char const *s, char c, size_t i)
{
	size_t	word_len;

	while (*s)
	{
		while (*s == c && *s)
			++s;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			split[i] = ft_substr(s, 0, word_len);
			if (!split[i])
			{
				freedom_split(split, i);
				return (NULL);
			}
			s += word_len;
			++i;
		}
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;

	if (!s)
		return (NULL);
	split = (char **)(malloc(sizeof(char *) * (count_words(s, c) + 1)));
	if (!split)
		return (NULL);
	i = 0;
	split = liminal_split(split, s, c, i);
	return (split);
}

/*int	main(void)
{
	char const	*s = "I'm in love with a phoenix ";
	char		**split;
	size_t		i;

	split = ft_split(s, ' ');
	i = 0;
	while (split[i])
		printf("%s\n", split[i++]);
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (0);
}*/
