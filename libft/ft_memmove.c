/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:56:22 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/06 09:18:41 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	unsigned const char	*p_src;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	p_dst = (unsigned char *)dst;
	p_src = (unsigned const char *)src;
	if (!len || dst == src)
		return (dst);
	while (len--)
		p_dst[len] = p_src[len];
	return (dst);
}
