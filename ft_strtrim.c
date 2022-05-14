/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:03:22 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/14 22:03:28 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_incharset(const char *set, char c)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	while (ft_incharset(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_incharset(set, s1[j]))
		--j;
	str = malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	k = 0;
	while (k < (j - i + 1))
	{
		str[k] = s1[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
