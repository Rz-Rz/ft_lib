#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *ptr;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (i+j));
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy(ptr, s1, i);
	ft_strlcat(ptr, s2, (i+j));	
	return (ptr);
}
