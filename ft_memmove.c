#include "libft.h"

 void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest > src) {
		while(n) {
			dest[n] = src[n];
			n--;
		}
	}
	else {
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
