/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:29:52 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/12 11:44:20 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s)
		return (NULL);
	if ((unsigned int) ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((size_t)(ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	dest = (char *)malloc((len + 1) * sizeof(*s));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			dest[j++] = s[i];
		i++;
	}
	dest[j] = 0;
	return (dest);
}
