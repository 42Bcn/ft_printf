/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvelasco <cvelasco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:45:53 by cvelasco          #+#    #+#             */
/*   Updated: 2022/10/13 08:32:01 by cvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	void	ft_writenum(int n, int fd)
{
	char	num;

	num = ft_abs((n % 10)) + '0';
	n /= 10;
	if (n)
		ft_writenum(n, fd);
	write(fd, &num, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", 1);
	ft_writenum(n, fd);
}
