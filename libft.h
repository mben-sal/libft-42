/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:45:18 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/13 21:37:38 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>

typedef struct s_spl
{
	size_t	i;
	size_t	j;
	size_t	len;
	int		index;
	int		count;
	char	**ptr;
}	t_spl;

int		ft_isalpha(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *str);
int		ft_isascii(int arg);
void	*ft_memset(void *arr, int c, size_t n);
void	ft_bzero(void *s, size_t n );
char	*ft_strchr(const char *str, int c);
void	*ft_memmove(void*dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void*dest, const void *src, size_t	n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s1);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int arg);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putendl_fd(char *s, int fd);
int		ft_strncmp(const char *first, const char *second, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

#endif