/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:33:55 by kdhrif            #+#    #+#             */
/*   Updated: 2022/05/10 17:18:07 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	i = 0;
	if (dest > src)
	{
		while (n)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int             main(int argc, const char *argv[])                                    
  {                                    
          char    src[] = "lorem ipsum dolor sit amet";                                    
          char    *dest;                                    
          int             arg;                                    
                                      
          dest = src + 1;                                    
          alarm(5);                                    
          if (argc == 1)                                    
                  return (0);                                    
          else if ((arg = atoi(argv[1])) == 1)                                    
          {                                    
                  if (dest != ft_memmove(dest, "consectetur", 5))                                    
                          write(1, "dest's adress was not returned\n", 31);                                    
                  write(1, dest, 22);                                    
          }                                    
          else if (arg == 2)                                    
          {                                    
                  if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))                                    
                          write(1, "dest's adress was not returned\n", 31);                                    
                  write(1, dest, 22);                                    
          }                                    
          else if (arg == 3)                                    
          {                                    
                  if (dest != ft_memmove(dest, src, 8))                                    
                          write(1, "dest's adress was not returned\n", 31);                                    
                  write(1, dest, 22);                                    
          }                                    
          else if (arg == 4)                                    
          {                                    
                  if (src != ft_memmove(src, dest, 8))                                    
                          write(1, "dest's adress was not returned\n", 31);                                    
                  write(1, dest, 22);                                    
          }                                    
          else if (arg == 5)                                    
          {                                    
                  if (src != ft_memmove(src, dest, 0))                                    
                          write(1, "dest's adress was not returned\n", 31);                                    
                  write(1, dest, 22);                                    
          }                                    
          return (0);
  }
