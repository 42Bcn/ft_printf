/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:57:29 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/06 09:24:15 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] && s2[i])
		&& (diff == 0) && (i < n))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
