/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:19:17 by kdhrif            #+#    #+#             */
/*   Updated: 2022/04/29 12:19:24 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
		size_t i;

		if (!dest && !src)
				return (0);
		i = 0;
		while (i < n)
		{
				((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
				i++;
		}
		return(dest);
}
