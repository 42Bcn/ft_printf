/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:37:53 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/12 16:29:11 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_word_count(char const *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (str[0] && str[0] != c)
		word++;
	while (str[i] && str[i + 1])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	return (word);
}

static	char	**ft_fill_matrix(char const *src, char c, char **dest)
{
	size_t	start;
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	start = 0;
	while (src[i])
	{
		if (src[i] == c && src[i + 1] != c)
			start = i + 1;
		if ((src[i + 1] == c && src[i] != c) || (src[i] != c && !src[i + 1]))
		{
			dest[word] = ft_substr(src, start, (i + 1 - start));
			if (!dest[word])
			{
				ft_free(dest);
				return (NULL);
			}
			word++;
		}
		i++;
	}
	dest[word] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	dest = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!dest)
		return (NULL);
	return (ft_fill_matrix(s, c, dest));
}
