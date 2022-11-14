/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:39:11 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/12 09:49:24 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (!n)
		i = 1;
	else if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*s;

	n_len = ft_numlen(n);
	s = malloc(n_len * sizeof(char) + 1);
	if (!s)
		return (NULL);
	s[n_len] = '\0';
	if (n <= 0)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	while (n)
	{
		n_len--;
		s[n_len] = ft_abs((n % 10)) + '0';
		n /= 10;
	}
	return (s);
}
