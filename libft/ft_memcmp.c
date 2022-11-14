/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:36:33 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/06 09:17:11 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	size_t			diff;
	unsigned char	*c_str1;
	unsigned char	*c_str2;

	c_str1 = (unsigned char *)str1;
	c_str2 = (unsigned char *)str2;
	i = 0;
	diff = 0;
	while ((diff == 0) && (i < n))
	{
		diff = c_str1[i] - c_str2[i];
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = c_str1[i] - c_str2[i];
	return (diff);
}
