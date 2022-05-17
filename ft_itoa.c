/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:27:17 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/17 18:08:48 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_strrev(char *s, int len)
{
	int		i;
	char	temp;

	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - (i + 1)];
		s[len - (i + 1)] = temp;
		i++;
	}
}

char	*ft_strcpy(const char *src)
{
	size_t	i;
	char *dst;

	i = 0;
	dst = malloc(sizeof(char) * (11 + 1));
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		neg;
	char	*s;

	if (n == INT_MIN)
		return (ft_strcpy("-2147483648"));
	neg = (n < 0);
	len = ft_intlen(n);
	s = malloc(sizeof(char) * (len + 1 + neg));
	if (!s)
		return (NULL);
	if (neg && ++len)
		n *= -1;
	i = -1;
	while (++i < len && n)
	{
		s[i] = n % 10 + '0';
		printf("%c", s[i]);
		n /= 10;
	}
	if (neg)
		s[i++] = '-';
	ft_strrev(s, len);
	s[i] = '\0';
	return (s);
}

int	main(void)
{
	/* int	n; */

	/* n = -99999; */
	/* printf("%s\n", ft_itoa(n)); */
	printf("\n%s\n", ft_itoa(-123));
	/* printf("%s\n", ft_itoa(-1)); */
	/* printf("%s\n", ft_itoa(-9872349)); */
	printf("\n%s\n", ft_itoa(INT_MAX));
	/* printf("%s\n", ft_itoa(INT_MIN)); */
	/* printf("\n%s\n", ft_itoa(6666)); */
	/* printf("\n%s\n", ft_itoa(12345)); */
	return (0);
}
