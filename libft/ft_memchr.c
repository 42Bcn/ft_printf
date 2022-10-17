/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:58:45 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/12 09:22:52 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_s;

	i = 0;
	c_s = (unsigned char *)s;
	while (i < n)
	{
		if (c_s[i] == (unsigned char)(c))
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
