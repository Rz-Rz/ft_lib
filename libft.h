/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:42:04 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/10 16:46:12 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

//Functions from ctype.h library
int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

// Functions from string.h library
void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

int	ft_memcmp(void *s1, void *s2, unsigned char n);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s);


// Functions from string.h library
size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// Functions from stdlib
int	ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);







#endif
