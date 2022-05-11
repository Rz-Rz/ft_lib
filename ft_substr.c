  #include "libft.h"    
      
  char *ft_substr(char const *s, unsigned int start, size_t len)    
  {    
          char *pstart;          
          char *ptr;          
          size_t i;    
      
          ptr = malloc(sizeof(char) * len + 1);    
          if (!ptr)    
                  return (NULL);    
      
          pstart = ft_strchr(s, start);     
          if (!pstart)    
                  return (NULL);    
		
	  ptr = ft_memcpy(ptr, pstart, len);
	  ptr[len] = '\0';
	  return (ptr);
  }
