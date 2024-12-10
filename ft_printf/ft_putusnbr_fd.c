/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:23:06 by lli2              #+#    #+#             */
/*   Updated: 2024/05/15 18:23:06 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putusnbr_fd(int m, int fd)
{
	char			c;
	unsigned int	n;

	n = (unsigned int)m;
	if (n >= 10)
	{
		ft_putusnbr_fd(n / 10, fd);
		ft_putusnbr_fd(n % 10, fd);
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	return (0);
}
