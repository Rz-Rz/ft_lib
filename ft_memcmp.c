/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:28:16 by kdhrif            #+#    #+#             */
/*   Updated: 2022/04/28 15:28:22 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, unsigned char n)
{
	unsigned char	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
