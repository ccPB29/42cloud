/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <lli2@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:17:35 by lli2              #+#    #+#             */
/*   Updated: 2024/12/22 06:11:26 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_pointer(void *ptr);
int				ft_putchar(char c);
int				ft_puthex(unsigned long n, int uppercase);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_putusnbr(unsigned int m);

#endif
