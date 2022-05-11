  #include "libft.h"    
      
  char *ft_substr(char const *s, unsigned int start, size_t len)    
  {    
          char *ptr;          

	  if (!s)
		  return (NULL);
	  ptr = malloc(sizeof(char) * len + 1);    
	  if (!ptr)    
		  return (NULL);    

	  ptr = ft_memcpy(ptr, &s[start], len);
	  ptr[len] = '\0';
	  return (ptr);
  }

