#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
		size_t i;

		i = 0;
		if (!dest && !src)
				return(NULL);
		while (i < n)
		{
				((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
				if (((unsigned char*)src)[i] == c)
						return (dest + i + 1);
				i++;
		}
		return(NULL);
}
