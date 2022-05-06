#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
		size_t srcSize;
		size_t i;

		if (!src || !dst)
				return (0);
		i = 0;
		srcSize = ft_strlen(src);

		while (i < size - 1 && src[i])
		{
				dst[i] = src[i];
				i++;
		}
		dst[i] = '\0';
		return (srcSize);
}

