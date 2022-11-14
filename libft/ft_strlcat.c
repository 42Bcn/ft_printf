/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:59:13 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/06 09:32:25 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	s1;
	size_t	s2;

	i = 0;
	s1 = ft_strlen(dest);
	s2 = ft_strlen(src);
	if (size == 0 || s1 >= size)
		return (s2 + size);
	while (src[i] && s1 < (size - 1 - i))
	{
		dest[s1 + i] = src[i];
		i++;
	}
	dest[s1 + i] = '\0';
	return (s1 + s2);
}
