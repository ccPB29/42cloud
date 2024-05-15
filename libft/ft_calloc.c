/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:28:41 by lli2              #+#    #+#             */
/*   Updated: 2024/05/15 13:28:41 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	total_size;
	void			*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == (void *)0)
		return ((void *)0);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
