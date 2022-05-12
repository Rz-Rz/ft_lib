/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:15:06 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/12 16:39:13 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_incharset(char* set, char c)
{
	int i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	char *str;
	

	i = 0;
	j = 0;
	while (ft_incharset(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_incharset(s[j]))
		j--;
	str = malloc(sizeof(char) * (j - i + 2))
	if (!str)
		return (NULL);
	k = 0;
	while (k < (j - i) + 2)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);


}