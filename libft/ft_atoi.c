/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:40:53 by cvelasco          #+#    #+#             */
/*   Updated: 2022/09/22 11:47:56 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	j;
	int	n;
	int	i;

	j = 0;
	i = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = str[i] - 48 + (n * 10);
		if (str[i + 1] < '0' || str[i + 1] > '9')
			break ;
		i++;
	}
	if (j % 2 == 1)
		n *= -1;
	return (n);
}
