
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:00:19 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/13 13:00:23 by kdhrif           ###   ########.fr       */
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
<<<<<<< HEAD
		j--;
=======
		--j;
>>>>>>> 8cdc688b6365a500255ed50c81bd9a2d74badf64
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
