/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:33:44 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/12 09:24:51 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_includes(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s_start;
	int		s_end;
	int		i;
	char	*dest;

	i = 0;
	s_start = 0;
	s_end = ft_strlen(s1);
	while (s1[s_start] && ft_includes(s1[s_start], set))
		s_start++;
	while ((s_start < s_end) && ft_includes(s1[s_end - 1], set))
		s_end--;
	dest = malloc((s_end - s_start + 1) * sizeof(*dest));
	if (!dest)
		return (NULL);
	while (s_start < s_end)
		dest[i++] = s1[s_start++];
	dest[i] = '\0';
	return (dest);
}
