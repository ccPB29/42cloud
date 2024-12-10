/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <lli2@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:17:16 by lli2              #+#    #+#             */
/*   Updated: 2024/12/10 11:30:30 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
	}
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long)ptr, 0);
	return (count);
}
