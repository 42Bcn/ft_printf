/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:20:27 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/09 15:02:51 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)(c))
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)(c))
		return ((char *)&s[i]);
	return (NULL);
}
