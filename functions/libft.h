#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
