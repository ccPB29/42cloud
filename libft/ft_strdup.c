/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:29:11 by lli2              #+#    #+#             */
/*   Updated: 2024/05/15 13:29:11 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup == (void *)0)
	{
		return ((void *)0);
	}
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
