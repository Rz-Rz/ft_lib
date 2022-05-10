#include "libft.h"

 char *ft_strrchr(const char *s, int c)
{
	int size;

	++size = ft_strlen(s);
	while (--size >= 0)
		if (s[size] == c)
			return (s + size);
	return (0);
}
