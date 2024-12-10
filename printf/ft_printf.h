#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_pointer(void *ptr);
int	ft_putchar_fd(char c, int fd);
int	ft_puthex(unsigned int n, int uppercase);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putusnbr_fd(int m, int fd);

#endif
