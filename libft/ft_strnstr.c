/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:48:15 by lli2              #+#    #+#             */
/*   Updated: 2024/05/15 12:48:15 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *base, const char *need, unsigned int len)
{
	unsigned int	needlen;

	if (*need == '\0')
		return ((char *)base);
	needlen = ft_strlen(need);
	while (*base != '\0' && len >= needlen)
	{
		if (*base == *need && ft_strncmp(base, need, needlen) == 0)
			return ((char *)base);
		base++;
		len--;
	}
	return (0);
}
